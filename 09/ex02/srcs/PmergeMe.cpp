/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:09:46 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/27 11:09:22 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

using Vector = std::vector<int>;

PmergeMe::PmergeMe(Vector& array) : input_(array) {
  Sort();
}

void PmergeMe::Sort() {
  std::cout << "Before:\t" << input_ << '\n';
  std::cout << std::fixed << std::setprecision(5);

  auto v_start = std::chrono::high_resolution_clock::now();
  Vector sorted_vector;
  SortVector(sorted_vector);
  if (!std::is_sorted(sorted_vector.begin(), sorted_vector.end()))
    throw std::runtime_error("Vector is not sorted");
  auto v_end = std::chrono::high_resolution_clock::now();
  auto v_duration = std::chrono::duration_cast<std::chrono::nanoseconds>(v_end - v_start).count();

  auto d_start = std::chrono::high_resolution_clock::now();
  Deque sorted_deque;
  SortDeque(sorted_deque);
  if (!std::is_sorted(sorted_deque.begin(), sorted_deque.end()))
    throw std::runtime_error("Deque is not sorted");
  auto d_end = std::chrono::high_resolution_clock::now();
  auto d_duration = std::chrono::duration_cast<std::chrono::nanoseconds>(d_end - d_start).count();
  

  std::cout << "After(vector):\t" << sorted_vector << '\n';
  std::cout << "After(deque):\t" << sorted_deque << '\n';
  LogResults("std::vector", v_duration / 1000.0, 0);
  LogResults("std::deque", d_duration / 1000.0, 0);

}

void PmergeMe::SortVector(Vector& main) {
  if (input_.size() == 1) { //If array size == 1 there is nothing to sort
    main.insert(main.begin(), input_[0]);
    return;
  }

  Vector               small;
  std::vector<size_t>  insertion_limits(input_.size() / 2 + 1);

  main.reserve(input_.size());
  small.reserve(input_.size() / 2 + 1);

  InitVector(main, small);
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

void PmergeMe::InitVector(Vector& main, Vector& small) {
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

size_t  PmergeMe::BinarySearch(Vector& vec, size_t first, size_t last, int value) const {
  while (first != last) {
    size_t mid = (first + last) / 2;
    if (value < vec[mid])
      last = mid;
    else
      first = mid + 1;
  }
  return last;
}

std::ostream& operator<<(std::ostream& os, const Vector& vector)
{
    for (int element : vector) {
        os << element << ' ';
    }
    return os;
}

void  PmergeMe::LogResults(std::string type, double duration, int mode) {
  if (mode == 0)
    std::cout << "Time to process a range of " << input_.size() << " elements with " << type << " : " << duration << " us\n";
  else
    std::cout << duration << '\n';
}