/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:19:31 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/09 16:59:18 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_


template <typename T>
class Array
{
 public:
  Array();
  Array(unsigned int n);
  Array(const Array& other);
  Array& operator=(const Array& other) &;

  ~Array();

  T& operator[](int n);
  const T& operator[](int n) const;
  unsigned int size() const;

 private:
  T*           ptr_;
  unsigned int size_ = 0;
};

#include "Array.tpp"

#endif