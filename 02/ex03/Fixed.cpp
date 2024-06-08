/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:37:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/08 21:49:28 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bit = 8;

Fixed::Fixed() : _value(0) {};

Fixed::Fixed(const int value) : _value(value << _bit) {};

Fixed::Fixed(const float value) : _value(std::roundf(value * (1 << _bit))) {};

Fixed::Fixed(const Fixed& other) {
  *this = other;
};

Fixed::~Fixed() {};

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
  _value = other.getRawBits();
  return *this;
}

bool Fixed::operator>(const Fixed& other) const {
  return (this->_value > other._value);
}

bool Fixed::operator<(const Fixed& other) const {
  return (this->_value < other._value);
}

bool Fixed::operator>=(const Fixed& other) const {
  return (this->_value >= other._value);
}

bool Fixed::operator<=(const Fixed& other) const {
  return (this->_value <= other._value);
}

bool Fixed::operator==(const Fixed& other) const {
  return (this->_value == other._value);
}

bool Fixed::operator!=(const Fixed& other) const {
  return (this->_value != other._value);
}

Fixed Fixed::operator+(const Fixed& other) {
  return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) {
  return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) {
  return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) {
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
