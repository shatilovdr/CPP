/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:42:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/19 11:06:32 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <set>
#include <stdexcept>
#include <vector>

class Span {
 public:
  Span() = delete;
  Span(unsigned int cap);
  Span(const Span& other)              = default;
  Span& operator=(const Span& other) & = default;

  ~Span() = default;

  unsigned int  shortestSpan() const;
  unsigned int  longestSpan() const;
  void          addNumber(int number);
  void          addNumber(int number, unsigned int quantity);
  void          addNumber(const std::vector<int>& vec);
  void          addNumber(std::vector<int>::const_iterator begin,
                           std::vector<int>::const_iterator end);

 private:
  unsigned int   curr_;
  unsigned int   cap_;
  std::set<int>  set_;
  bool           hasDuplicates_;
};

#endif