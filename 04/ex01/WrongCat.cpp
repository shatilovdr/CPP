/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:30:13 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 14:47:59 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
  std::cout << "WrongCat copy constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  std::cout << "WrongCat copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  WrongAnimal::operator=(other);
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound() const {
  std::cout << "Meow💩\n";
}
