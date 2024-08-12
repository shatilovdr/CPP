/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:42:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/12 18:29:08 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <iostream>
#include <stdexcept>
#include <vector>


class Span {
 public:
  Span() = delete;
  Span(unsigned int cap);
  Span(const Span& other) = default;
  Span& operator=(const Span& other) & = default;

  ~Span() = default;

  unsigned int             shortestSpan() const;
  unsigned int             longestSpan() const;
  void                     addNumber(int number);
  void                     addNumber(int number, unsigned int quantity);
  const std::vector<int>&  getVec() const;

 private:
  unsigned int     curr_;
  std::vector<int> vec_;
};

std::ostream& operator<<(std::ostream& os, const Span& obj);

#endif