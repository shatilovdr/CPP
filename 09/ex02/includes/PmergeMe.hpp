/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:10:28 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/26 17:23:53 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <algorithm>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

class PmergeMe {
 public:
  PmergeMe() = delete;
  PmergeMe(std::vector<int>& array);
  PmergeMe(const PmergeMe& other)            = delete;
  PmergeMe& operator=(const PmergeMe& other) = delete;

  ~PmergeMe() = default;

 private:
  using Vector = std::vector<int>;
  using Deque = std::deque<int>;

  void    Sort();
  void    SortVector(Vector& main);
  void    InitVector(Vector& main, Vector& small);
  void    SortDeque(Deque& main);
  void    InitDeque(Deque& main, Deque& small);
  size_t  BinarySearch(Deque& vec, size_t first, size_t last, int value) const;
  size_t  BinarySearch(Vector& vec, size_t first, size_t last, int value) const;
  void    LogResults(std::string type, double duration, int mode);

  const Vector  input_;
};

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vector);
std::ostream& operator<<(std::ostream& os, const std::deque<int>& deque);
#endif
