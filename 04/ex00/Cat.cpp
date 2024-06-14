/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:03:32 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 18:43:10 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() : type("Cat") {
  std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat& other) : type(other.type) {
  std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other) {
  std::cout << "Cat copy assignment operator called\n";
  if (&other == this)
    return *this;
  type = other.type;
  return *this;
}

Cat::~Cat() {
  std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const {
  std::cout << "Meow💩\n";
}
