/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:09:46 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/24 18:51:59 by dshatilo         ###   ########.fr       */
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

void print(std::vector<int>& big, std::vector<int>& small) {
  size_t limit = big.size() - small.size();
  std::cout << '\n';
  for (size_t i = 0; i < limit; ++i) {
    std::cout << big[i] << '\t';
  }
  std::cout << '\n';
  for (size_t i = 0; i < small.size(); ++i) {
    std::cout << small[i] << '\t';
  }
  std::cout << '\n';
}

void PmergeMe::sortVector() {
  int main_size = input_.size();
  int small_size = main_size / 2 + main_size % 2;
  std::vector<int>  main(main_size);
  std::vector<int>  small(small_size);

  initVector(main, small);
}

void PmergeMe::initVector(std::vector<int>& main, std::vector<int>& small) {
  //copy values
  for (size_t i = 0, main_idx = 0, small_idx = 0; i < input_.size(); ++i) {
    if (i % 2 == 0)
      small[main_idx++] = input_[i];
    else
      main[small_idx++] = input_[i];
  }
  //compare pairs
  size_t limit = main.size() - small.size();
  for (size_t i = 0; i < limit; ++i) {
    if (small[i] > main[i])
      std::swap(small[i], main[i]);
  }
//insertion sort for larger elements
  for (size_t i = 1; i < small.size() - 1; ++i) {
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
}
