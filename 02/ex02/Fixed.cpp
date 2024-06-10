/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:37:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/10 19:19:02 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bit = 8;

Fixed::Fixed() : _value(0) {
  // std::cout << "Default constructor called\n";
};

Fixed::Fixed(const int value) : _value(value << _bit) {
  // std::cout << "Int constructor called\n";
};

Fixed::Fixed(const float value) : _value(std::roundf(value * (1 << _bit))) {
  // std::cout << "Float constructor called\n";
};

Fixed::Fixed(const Fixed& other) {
  // std::cout << "Copy constructor called\n";
  *this = other;
};

Fixed::~Fixed() {
  // std::cout << "Destructor called\n";
};

Fixed& Fixed::min(Fixed& a, Fixed& b) {
  return (a <= b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
  return (a <= b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
  return (a >= b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
  return (a >= b ? a : b);
}

int Fixed::getRawBits() const {
  // std::cout << "getRawBits member function called\n";
  return _value;
}

void Fixed::setRawBits(int const raw) {
  _value = raw;
}

float Fixed::toFloat(void) const {
  return (static_cast<float>(_value) / (1 << _bit));
}

int Fixed::toInt(void) const {
  return (_value >> _bit);
}

Fixed& Fixed::operator=(const Fixed& other) {
  // std::cout << "Copy assignment operator called\n";
  _value = other.getRawBits();
  return *this;
}

bool Fixed::operator<(const Fixed& other) const {
  return (this->_value < other._value);
}

bool Fixed::operator>(const Fixed& other) const {
  return (other < *this);
}

bool Fixed::operator<=(const Fixed& other) const {
  return !(this->_value > other._value);
}

bool Fixed::operator>=(const Fixed& other) const {
  return !(this->_value < other._value);
}

bool Fixed::operator==(const Fixed& other) const {
  return (this->_value == other._value);
}

bool Fixed::operator!=(const Fixed& other) const {
  return (this->_value != other._value);
}

Fixed Fixed::operator+(const Fixed& other) const {
  return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
  return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
  return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
  return (this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++() {
  ++(this->_value);
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed temp(*this);
  ++(*this);
  return temp;
}

Fixed& Fixed::operator--() {
  --(this->_value);
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed temp(*this);
  --(*this);
  return temp;
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj) {
  out << obj.toFloat();
  return out;
}
