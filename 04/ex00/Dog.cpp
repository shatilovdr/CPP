/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:03:32 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 18:43:10 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() : type("Dog") {
  std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& other) : type(other.type) {
  std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other) {
  std::cout << "Dog copy assignment operator called\n";
  if (&other == this)
    return *this;
  type = other.type;
  return *this;
}

Dog::~Dog() {
  std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const {
  std::cout << "Woof, woof🐶\n";
}
