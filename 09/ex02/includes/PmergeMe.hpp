/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:10:28 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/24 18:47:45 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

#include <algorithm>
#include <deque>
#include <iostream>
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
  void  sort();
  void  sortVector();
  void  initVector(std::vector<int>& main, std::vector<int>& small);

  const std::vector<int> input_;
};

#endif
