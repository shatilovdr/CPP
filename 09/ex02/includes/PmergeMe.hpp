/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:10:28 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/22 15:25:47 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP_
#define PMERGEME_HPP_

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

  const std::vector<int> vec_;
};

#endif
