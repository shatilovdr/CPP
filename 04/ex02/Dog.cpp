/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:06:29 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 17:58:42 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog"), brain_(new Brain) {
  std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& other) : Animal(other), brain_(new Brain(*other.brain_)) {
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
  delete brain_;
}

void Dog::makeSound() const {
  std::cout << "Woof, woof🐶\n";
}

void Dog::AddIdea(const std::string& idea) const {
  if (brain_->AddIdea(idea) == false) {
    std::cout << "To many ideas for one cat!\n";
  }
}

void Dog::PrintIdeas() const {
  brain_->PrintIdeas();
}
