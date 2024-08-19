/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:42:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/19 11:08:57 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int cap) : curr_(0), cap_(cap), hasDuplicates_(false) {}

unsigned int  Span::shortestSpan() const {
  if (curr_ == 0 || curr_ == 1) {
    throw std::runtime_error("Not enough elements to find span.");
  }
  if (hasDuplicates_)
    return 0;
  std::set<int>::iterator  itr;
  unsigned int             shortest_span = *set_.rbegin() - *set_.begin();
  unsigned int             curr_span;
  int                      prev_num = *set_.begin();

  for (itr = ++set_.begin(); itr != set_.end(); ++itr) {
    curr_span = *itr - prev_num;
    if (curr_span < shortest_span) {
      shortest_span = curr_span;
    }
    prev_num = *itr;
  }
  return shortest_span;
}

unsigned int  Span::longestSpan() const {
  if (curr_ == 0 || curr_ == 1) {
    throw std::runtime_error("Not enough elements to find span.");
  }
  return *set_.rbegin() - *set_.begin();
}

void  Span::addNumber(int number) {
  if (++curr_ > cap_) {
    throw std::overflow_error("Trying to add number to full Span.");
  }
  hasDuplicates_ = !set_.insert(number).second;
}

void  Span::addNumber(int number, unsigned int quantity) {
  if (cap_ - curr_ < quantity) {
    throw std::overflow_error("Trying to add too many numbers to Span.");
  }
  curr_ += quantity;
  while (quantity--) {
    hasDuplicates_ = !set_.insert(number).second;
  }
}

void  Span::addNumber(const std::vector<int>& vec) {
  if (cap_ - curr_ < vec.size()) {
    throw std::overflow_error("Trying to add too many numbers to Span.");
  }
  curr_ += vec.size();
  for (const int& x : vec) {
    hasDuplicates_ = !set_.insert(x).second;
  }
}

void  Span::addNumber(std::vector<int>::const_iterator begin,
                       std::vector<int>::const_iterator end) {
  unsigned int size = end - begin;
  if (cap_ - curr_ <size) {
    throw std::overflow_error("Trying to add too many numbers to Span.");
  }
  curr_ += size;
  for (std::vector<int>::const_iterator it = begin; it != end; ++it) {
    hasDuplicates_ = !set_.insert(*it).second;
  }
}