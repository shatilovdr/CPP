/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:37:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/23 10:07:26 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit_ = 8;

Fixed::Fixed() : value_(0) {
  std::cout << "Default constructor called\n";
};

Fixed::Fixed(const int value) : value_(value << bit_) {
  std::cout << "Int constructor called\n";
};

Fixed::Fixed(const float value) : value_(std::roundf(value * (1 << bit_))) {
  std::cout << "Float constructor called\n";
};

Fixed::Fixed(const Fixed& other) : value_(other.getRawBits()) {
  std::cout << "Copy constructor called\n";
};

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

float Fixed::toFloat(void) const {
  return (static_cast<float>(value_) / (1 << bit_));
}

int Fixed::toInt(void) const {
  return (value_ >> bit_);
}

Fixed& Fixed::operator=(const Fixed& other) {
  std::cout << "Copy assignment operator called\n";
  value_ = other.getRawBits();
  return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj) {
  out << obj.toFloat();
  return out;
}
