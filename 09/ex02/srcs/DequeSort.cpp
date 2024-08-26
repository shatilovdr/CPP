/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DequeSort.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:09:46 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/26 17:28:09 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

using Deque = std::deque<int>;

void PmergeMe::SortDeque(Deque& main) {
  if (input_.size() == 1) { //If array size == 1 there is nothing to sort
    main.insert(main.begin(), input_[0]);
    return;
  }

  Deque               small;
  std::deque<size_t>  insertion_limits(input_.size() / 2 + 1);

  InitDeque(main, small);
  main.insert(main.begin(), small[0]);

  std::iota(insertion_limits.begin(), insertion_limits.end(), 1);
  size_t prev_max_idx = 1;
  size_t k = 1;

  while (main.size() != input_.size()) {
    size_t  curr_max_idx = std::pow(2, ++k) - prev_max_idx;
    size_t  curr = curr_max_idx < small.size() ? curr_max_idx : small.size();

    while (curr > prev_max_idx) {
      size_t  pos = BinarySearch(main, 0, insertion_limits[curr - 1], small[curr - 1]);
      main.insert(main.begin() + pos, small[curr - 1]);

      for (size_t  i = prev_max_idx; i < insertion_limits.size(); ++i) {
        if (insertion_limits[i] >= pos)
          ++insertion_limits[i];
      }
      --curr;
    }
    prev_max_idx = curr_max_idx;
  }
}

void PmergeMe::InitDeque(Deque& main, Deque& small) {
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
}

size_t  PmergeMe::BinarySearch(Deque& vec, size_t first, size_t last, int value) const {
  while (first != last) {
    size_t mid = (first + last) / 2;
    if (value < vec[mid])
      last = mid;
    else
      first = mid + 1;
  }
  return last;
}

std::ostream& operator<<(std::ostream& os, const Deque& deque)
{
    for (int element : deque) {
        os << element << ' ';
    }
    return os;
}