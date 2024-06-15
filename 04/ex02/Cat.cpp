/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:06:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 17:58:12 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat"), brain_(new Brain) {
  std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other), brain_(new Brain(*other.brain_)) {
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
  delete brain_;
}

void Cat::makeSound() const {
  std::cout << "Meow🐈\n";
}

void Cat::AddIdea(const std::string& idea) const {
  if (brain_->AddIdea(idea) == false) {
    std::cout << "To many ideas for one dog!\n";
  }
}

void Cat::PrintIdeas() const {
  brain_->PrintIdeas();
}
