/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:55:44 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/14 17:07:54 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP_
#define ITER_HPP_

#include <cstddef>

template <typename T>
void iter(const T* arr, std::size_t length, void (*f)(const T&)) {
  for (std::size_t i = 0; i < length; ++i) {
    f(*(arr + i));
  }
}

template <typename T>
void iter(T* arr, std::size_t length, void (*f)(T&)) {
  for (std::size_t i = 0; i < length; ++i) {
    f(*(arr + i));
  }
}
#endif