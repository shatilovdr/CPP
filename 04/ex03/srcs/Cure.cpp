/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:47:34 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/17 20:50:08 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {
  std::cout << "Cure default constructor called\n";
}

Cure::Cure(const Cure& other) : AMateria(other) {
  std::cout << "Cure copy constructor called\n";
}

Cure& Cure::operator=(const Cure& other) {
  std::cout << "Cure copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  AMateria::operator=(other);
  return *this;
}

Cure::~Cure() {
  std::cout << "Cure destructor called\n";
}

Cure* Cure::clone() const {
  std::cout << "Cure clone() called\n";
  return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
