/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:47:34 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/16 18:36:20 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : materias_{nullptr} {
  std::cout << "MateriaSource default constructor called\n";
}

MateriaSource::MateriaSource(const MateriaSource& other) {
  std::cout << "MateriaSource copy constructor called\n";
  *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
  std::cout << "MateriaSource copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  //add something;
  return *this;
}

MateriaSource::~MateriaSource() {
  std::cout << "MateriaSource destructor called\n";
}

void MateriaSource::learnMateria(AMateria *materia) {
  materias_[0] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
  (void)type;
  return nullptr;
}