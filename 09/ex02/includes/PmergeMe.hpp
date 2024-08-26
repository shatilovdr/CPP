/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:10:28 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/26 11:30:04 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <algorithm>
#include <deque>
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

  void    Sort();
  void    SortVector();
  void    InitVector(Vector& main, Vector& small);
  size_t  BinarySearch(Vector& vec, size_t first, size_t last, int value);

  const Vector input_;
};

#endif
