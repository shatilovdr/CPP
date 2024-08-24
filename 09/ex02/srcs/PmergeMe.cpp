/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:09:46 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/24 23:30:08 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int>& array) : input_(array) {
  sort();
}

void PmergeMe::sort() {
  std::cout << "Before:\t";
  for (const int& x : input_)
    std::cout << x << ' ';
  std::cout << '\n';
  // std::cout << "\nAfter:\t";
  // for (const int& x : vec_)
  //   std::cout << x << ' ';
  // std::cout << '\n';
  sortVector();
}

void print(std::vector<int>& main, std::vector<int>& small) {
  std::cout << '\n';
  for (int& x : main)
    std::cout << '\t' << x;
  std::cout << '\n';

  for (int& x : small)
    std::cout << x << '\t';
  std::cout << '\n';
}

void PmergeMe::sortVector() {
  std::vector<int>  main;
  std::vector<int>  small;

  main.reserve(input_.size());
  small.reserve(input_.size() / 2 + 1);

  initVector(main, small);
  print(main, small);
}

void PmergeMe::initVector(std::vector<int>& main, std::vector<int>& small) {
  //copy values
  for (size_t i = 0; i < input_.size(); ++i) {
    if (i % 2 == 0)
      small.push_back(input_[i]);
    else
      main.push_back(input_[i]);
  }
  //compare pairs
  for (size_t i = 0; i < main.size(); ++i) {
    if (small[i] > main[i])
      std::swap(small[i], main[i]);
  }
  //insertion sort for larger elements
  for (size_t i = 1; i < main.size(); ++i) {
    int main_val = main[i];
    int small_val = small[i];
    int j = i - 1;

    while (j >= 0 && main[j] > main_val) {
      main[j + 1] = main[j];
      small[j + 1] = small[j];
      --j;
    }
    main[j + 1] = main_val;
    small[j + 1] = small_val;
  }
  main.insert(main.begin(), small[0]);
}