/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FiFixeded.hpp                                          :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:09:53 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/07 13:13:56 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <cmath>
#include <iostream>

class Fixed {
 public:
  Fixed();
  Fixed(const int value);
  Fixed(const float value);
  Fixed(const Fixed& other);

  ~Fixed();

  static Fixed&       min(Fixed& a, Fixed& b);
  static const Fixed& min(const Fixed& a, const Fixed& b);
  static Fixed&       max(Fixed& a, Fixed& b);
  static const Fixed& max(const Fixed& a, const Fixed& b);

  int  getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int   toInt(void) const;

  Fixed& operator=(const Fixed& other);
  bool   operator>(const Fixed& other) const;
  bool   operator<(const Fixed& other) const;
  bool   operator>=(const Fixed& other) const;
  bool   operator<=(const Fixed& other) const;
  bool   operator==(const Fixed& other) const;
  bool   operator!=(const Fixed& other) const;
  Fixed  operator+(const Fixed& other) const;
  Fixed  operator-(const Fixed& other) const;
  Fixed  operator*(const Fixed& other) const;
  Fixed  operator/(const Fixed& other) const;
  Fixed& operator++();
  Fixed  operator++(int);
  Fixed& operator--();
  Fixed  operator--(int);

 private:
  static const int _bit;
  int              _value;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif