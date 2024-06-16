/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:47:34 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/16 15:48:36 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include <iostream>

AMateria::AMateria(const AMateria& other) : type_(other.type_) {
  std::cout << "AMateria copy constructor called\n";
}

AMateria::AMateria(std::string const& type) : type_(type) {
  std::cout << "AMateria constructor with parameter called\n";
}

AMateria& AMateria::operator=(const AMateria& other) {
  std::cout << "AMateria copy assignment operator called\n";
  (void)other;
  return *this;
}

AMateria::~AMateria() {
  std::cout << "AMateria destructor called\n";
}

std::string const& AMateria::getType() const {
  return type_;
}

