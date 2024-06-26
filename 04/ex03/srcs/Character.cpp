/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:47:34 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/26 11:08:45 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const& name)
    : name_(name), inventory_{nullptr}, unequiped_{nullptr} {
  std::cout << "Character constructor with parameter called\n";
}

Character::Character(const Character& other)
    : name_(other.name_), inventory_{nullptr}, unequiped_{nullptr} {
  std::cout << "Character copy constructor called\n";
  for (int i = 0; i < INVENTORY_CAPACITY; ++i) {
    if (other.inventory_[i] != nullptr) {
      inventory_[i] = other.inventory_[i]->clone();
    }
  }
}

Character& Character::operator=(const Character& other) {
  std::cout << "Character copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  name_ = other.name_;
  for (int i = 0; i < INVENTORY_CAPACITY; ++i) {
    if (inventory_[i] != nullptr) {
      delete inventory_[i];
      inventory_[i] = nullptr;
    }
    if (other.inventory_[i] != nullptr) {
      inventory_[i] = other.inventory_[i]->clone();
    }
  }
  return *this;
}

Character::~Character() {
  std::cout << "Character destructor called\n";
  for (int i = 0; i < INVENTORY_CAPACITY; ++i) {
    if (inventory_[i] != nullptr) {
      delete inventory_[i];
    }
  }
  if (unequiped_ != nullptr) {
    unequiped_->Clear();
    delete unequiped_;
  }
}

std::string const& Character::getName() const {
  return this->name_;
}

void Character::equip(AMateria* m) {
  for (int i = 0; i < INVENTORY_CAPACITY; ++i) {
    if (inventory_[i] == m) {
      return;
    }
  }
  for (int i = 0; i < INVENTORY_CAPACITY; ++i) {
    if (inventory_[i] == nullptr) {
      inventory_[i] = m;
      return;
    }
  }
  std::cout << "Character " << getName() << " slots are full. Materia \""
            << m->getType() << "\" will be removed.\n";
  delete m;
}

void Character::unequip(int idx) {
  if (idx < 0 || idx >= INVENTORY_CAPACITY) return;
  if (inventory_[idx] == nullptr) return;
  if (unequiped_ == nullptr) {
    unequiped_ = new LinkedList<AMateria>(inventory_[idx]);
  } else {
    unequiped_->AddBack(inventory_[idx]);
  }
  inventory_[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target) {
  if (idx < 0 || idx >= INVENTORY_CAPACITY) return;
  if (inventory_[idx] == nullptr) return;
  inventory_[idx]->use(target);
}
