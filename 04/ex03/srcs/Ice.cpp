/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:47:34 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/16 18:30:20 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {
  std::cout << "Ice default constructor called\n";
}

Ice::Ice(const Ice& other) : AMateria(other) {
  std::cout << "Ice copy constructor called\n";
}

Ice& Ice::operator=(const Ice& other) {
  std::cout << "Ice copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  AMateria::operator=(other);
  return *this;
}

Ice::~Ice() {
  std::cout << "Ice destructor called\n";
}

Ice* Ice::clone() const {
  std::cout << "Ice clone() called\n";
  return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
