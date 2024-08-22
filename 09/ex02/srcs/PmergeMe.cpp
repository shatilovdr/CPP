/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:09:46 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/22 16:01:54 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int>& array) : vec_(array) {
  sort();
}

void PmergeMe::sort() {
  std::cout << "Before:\t";
  for (const int& x : vec_)
    std::cout << x << ' ';
  std::cout << "\nAfter:\t";
  for (const int& x : vec_)
    std::cout << x << ' ';
  std::cout << '\n';
  std::vector<int> vector = vec_;
}

void mergeSort(std::vector<int>& vec) {
  int length = vec.size();
  if (length != 1) {
  int mid = length / 2;
    std::vector<int> left(vec.begin(), vec.begin() + mid);
    std::vector<int> right(vec.begin() + mid, vec.end());
    mergeSort(left);
    mergeSort(right);
  }
}