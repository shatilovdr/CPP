/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:37:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/23 08:57:24 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit_ = 8;

Fixed::Fixed() : value_(0) {
  std::cout << "Default constructor called\n";
};

Fixed::Fixed(const Fixed& other) : value_(other.getRawBits()) {
  std::cout << "Copy constructor called\n";
};

Fixed& Fixed::operator=(const Fixed& other) {
  std::cout << "Copy assignment operator called\n";
  value_ = other.getRawBits();
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called\n";
};

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called\n";
  return value_;
}

void Fixed::setRawBits(int const raw) {
  value_ = raw;
}
