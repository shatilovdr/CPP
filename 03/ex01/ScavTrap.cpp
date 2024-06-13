/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:03:32 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 18:43:10 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <limits>


ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
  std::cout << "ScavTrap " << name_ << " constructor with parameter called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
  std::cout << "ScavTrap " << name_ << " copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  std::cout << "ScavTrap " << name_ << " copy assignment operator called\n";
  ClapTrap::operator=(other);
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << name_ << " destructor called\n";
}

void ScavTrap::attack(const std::string& target) {
  if (IsExhausted("ScavTrap ") == true) {
    return;
  }
  std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing "
            << attack_dmg_ << " points of damage!\n";
  --hit_pnt_;
}

void ScavTrap::takeDamage(unsigned int amount) {
  if (IsExhausted("ScavTrap ") == true) {
    return;
  }
  amount = hit_pnt_ < amount ? hit_pnt_ : amount;
  std::cout << "ScavTrap " << name_ << " takes " << amount
            << " points of damage!\n";
  hit_pnt_ -= amount;
}

void ScavTrap::beRepaired(unsigned int amount) {
  if (IsExhausted("ScavTrap ") == true) {
    return;
  }
  unsigned int max = std::numeric_limits<unsigned int>::max();
  amount = max - hit_pnt_ > amount ? amount : max - hit_pnt_;
  std::cout << "ScavTrap " << name_ << " repairs, getting " << amount
            << " points of damage!\n";
  --energy_pnt_;
  hit_pnt_ += amount;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << name_ << " is now in Gate keeper mode.\n";
}
