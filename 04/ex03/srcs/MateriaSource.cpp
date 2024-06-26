/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:47:34 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/26 10:49:18 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : materias_{nullptr} {
  std::cout << "MateriaSource default constructor called\n";
}

MateriaSource::MateriaSource(const MateriaSource& other) : materias_{nullptr} {
  std::cout << "MateriaSource copy constructor called\n";
  for (int i = 0; i < SOURCE_CAPACITY; ++i) {
    if (other.materias_[i] != nullptr) {
      materias_[i] = other.materias_[i]->clone();
    }
  };
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
  std::cout << "MateriaSource copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  for (int i = 0; i < SOURCE_CAPACITY; ++i) {
    if (materias_[i] != nullptr) {
      delete materias_[i];
      materias_[i] = nullptr;
    }
    if (other.materias_[i] != nullptr) {
      materias_[i] = other.materias_[i]->clone();
    }
  }
  return *this;
}

MateriaSource::~MateriaSource() {
  std::cout << "MateriaSource destructor called\n";
  for (int i = 0; i < SOURCE_CAPACITY; ++i) {
    if (materias_[i] != nullptr) {
      delete materias_[i];
    }
  }
}

void MateriaSource::learnMateria(AMateria* materia) {
  for (int i = 0; i < SOURCE_CAPACITY; ++i) {
    if (materias_[i] == nullptr) {
      materias_[i] = materia;
      return;
    }
  }
  std::cout << "MateriaSource is full. Materia \"" << materia->getType()
            << "\" will be removed.\n";
  delete materia;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  int i;
  for (i = 0; i < SOURCE_CAPACITY; ++i) {
    if (materias_[i] == nullptr) {
      return nullptr;
    }
    if (materias_[i]->getType() == type) {
      return materias_[i]->clone();
    }
  }
  return nullptr;
}