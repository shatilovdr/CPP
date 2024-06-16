/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:47:34 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/16 18:50:01 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const& name) : name_(name), inventory{nullptr} {
  std::cout << "Character default constructor called\n";
}

Character::Character(const Character& other) {
  std::cout << "Character copy constructor called\n";
  *this = other;
}

Character& Character::operator=(const Character& other) {
  std::cout << "Character copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  //add something;
  return *this;
}

Character::~Character() {
  std::cout << "Character destructor called\n";
}

std::string const& Character::getName() const {
  return this->name_;
}

void Character::equip(AMateria* m) {
  for (int i = 0; i < INVENTORY_CAPACITY; ++i) {
    if (inventory[i] == nullptr) {
        inventory[i] = m;
        return;
    }
  }
}

void Character::unequip(int idx) {
  if (idx < 0 || idx >= INVENTORY_CAPACITY)
    return;
  if (inventory[idx] == nullptr)
    return;
  //do something;
}

void Character::use(int idx, ICharacter& target) {
  if (idx < 0 || idx >= INVENTORY_CAPACITY)
    return;
  if (inventory[idx] == nullptr)
    return;
  inventory[idx]->use(target);
}
