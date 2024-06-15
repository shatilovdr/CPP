/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:06:29 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 14:22:16 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog") {
  std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& other) : Animal(other) {
  std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other) {
  std::cout << "Dog copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  Animal::operator=(other);
  return *this;
}

Dog::~Dog() {
  std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const {
  std::cout << "Woof, woof🐶\n";
}
