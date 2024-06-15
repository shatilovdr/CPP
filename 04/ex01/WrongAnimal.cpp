/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:26:44 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 14:26:48 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type_("WrongAnimal") {
  std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type_(other.type_) {
  std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  std::cout << "WrongAnimal copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  type_ = other.type_;
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called\n";
}

std::string WrongAnimal::getType() const {
  return type_;
}

void WrongAnimal::makeSound() const {
  std::cout << "*Default WrongAnimal sound*\n";
}

WrongAnimal::WrongAnimal(std::string type) : type_(type) {
  std::cout << "WrongAnimal constructor with parameter called\n";
}
