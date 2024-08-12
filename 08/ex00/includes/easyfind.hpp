/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:30:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/12 12:13:30 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP_
#define EASY_FIND_HPP_

#include <algorithm>
#include <array>
#include <vector>
#include <deque>
#include <list>

template <typename T>
typename T::iterator easyfind(T& container, int integer) {
  typename T::iterator it = std::find(container.begin(), container.end(), integer);
  if (it == container.end()) {
    throw std::runtime_error("No occurrence is found in the container");
  }
  return it;
}

template <typename T>
typename T::const_iterator easyfind(const T& container, int integer) {
  typename T::const_iterator it = std::find(container.begin(), container.end(), integer);
  if (it == container.end()) {
    throw std::runtime_error("No occurrence is found in the container");
  }
  return it;
}

#endif