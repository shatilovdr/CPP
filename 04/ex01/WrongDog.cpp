/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:49:02 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 14:49:05 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog() : WrongAnimal("WrongDog") {
  std::cout << "WrongDog default constructor called\n";
}

WrongDog::WrongDog(const WrongDog& other) : WrongAnimal(other) {
  std::cout << "WrongDog copy constructor called\n";
}

WrongDog& WrongDog::operator=(const WrongDog& other) {
  std::cout << "WrongDog copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  WrongAnimal::operator=(other);
  return *this;
}

WrongDog::~WrongDog() {
  std::cout << "WrongDog destructor called\n";
}

void WrongDog::makeSound() const {
  std::cout << "Woof, woof🐶\n";
}
