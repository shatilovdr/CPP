/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:37:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/07 19:08:47 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bit = 8;

Fixed::Fixed() : _value(0) {
  std::cout << "Default constructor called\n";
};

Fixed::Fixed(const Fixed& other) {
  std::cout << "Copy constructor called\n";
  *this = other;
};

Fixed::~Fixed() {
  std::cout << "Destructor called\n";
};

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called\n";
  return _value;
}

void Fixed::setRawBits(int const raw) {
  _value = raw;
}

Fixed& Fixed::operator=(const Fixed& other) {
  std::cout << "Copy assignment operator called\n";
  _value = other.getRawBits();
  return *this;
}
