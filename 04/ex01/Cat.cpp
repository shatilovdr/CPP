/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:06:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 14:59:41 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") {
  std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other) {
  std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other) {
  std::cout << "Cat copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  Animal::operator=(other);
  return *this;
}

Cat::~Cat() {
  std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const {
  std::cout << "Meow🐈\n";
}
