/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:05:41 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 14:52:28 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type_("Animal") {
  std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal& other) : type_(other.type_) {
  std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other) {
  std::cout << "Animal copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  type_ = other.type_;
  return *this;
}

Animal::~Animal() {
  std::cout << "Animal destructor called\n";
}

std::string Animal::getType() const {
  return type_;
}

Animal::Animal(std::string type) : type_(type) {
  std::cout << "Animal constructor with parameter called\n";
}
