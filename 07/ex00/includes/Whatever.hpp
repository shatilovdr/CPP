/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:03:18 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/09 11:47:15 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP_
#define WHATEVER_HPP_

template <typename T> 
void swap(T& a, T&b) {
  T c = a;
  a = b;
  b = c;
}

template <typename T>
T& min(T& a, T&b) {
  return a < b ? a : b;
}

template <typename T>
T& max(T& a, T&b) {
  return a > b ? a : b;
}

#endif