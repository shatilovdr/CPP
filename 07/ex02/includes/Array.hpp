/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:19:31 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/15 12:06:16 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>

template <typename T>
class Array {
 public:
  Array();
  Array(unsigned int n);
  Array(const Array& other);
  Array& operator=(const Array& other) &;

  ~Array();

  T&           operator[](int n);
  const T&     operator[](int n) const;
  unsigned int size() const;

 private:
  T*           ptr_;
  unsigned int size_;

  // friend void test1();
};

#include "Array.tpp"

#endif