/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:03:32 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 18:43:10 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal() : type("Animal") {
  std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal& other) : type(other.type) {
  std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other) {
  std::cout << "Animal copy assignment operator called\n";
  if (&other == this)
    return *this;
  type = other.type;
  return *this;
}

Animal::~Animal() {
  std::cout << "Animal destructor called\n";
}

std::string Animal::getType() const {
  return type;
}


void Animal::makeSound() const {
  std::cout << "*Default animal sound*\n";
}
