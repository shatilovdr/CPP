/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:42:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/12 19:24:45 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int cap) : curr_(0), vec_(cap) {}

void  Span::addNumber(int number) {
  if (curr_ == vec_.size() - 1) {
    throw std::overflow_error("Trying to addNumber to full Span.");
  }
  vec_[curr_++] = number;
}

void  Span::addNumber(int number, unsigned int quantity) {
  //size_t final = curr_ + quantity;
  // if (final > vec.size() /*-1?*/)
    // throw std::overflow_error("Can't add  ");
}

const std::vector<int>&  Span::getVec() const {
  return vec_;
}

std::ostream& operator<<(std::ostream& os, const Span& obj) {
  const std::vector<int>& vec = obj.getVec();
  for (const int& x : vec) {
    os << x << ' ';
  }
  os << '\n';
  return os;
}
