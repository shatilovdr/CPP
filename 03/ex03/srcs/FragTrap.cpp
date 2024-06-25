/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:03:32 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 18:47:29 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <limits>


FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
  std::cout << "FragTrap " << name_ << " constructor with parameter called\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
  std::cout << "FragTrap " << name_ << " copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
  std::cout << "FragTrap " << name_ << " copy assignment operator called\n";
  ClapTrap::operator=(other);
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << name_ << " destructor called\n";
}

void FragTrap::attack(const std::string& target) {
  if (IsExhausted("FragTrap ") == true) {
    return;
  }
  std::cout << "FragTrap " << name_ << " attacks " << target << ", causing "
            << attack_dmg_ << " points of damage!\n";
  --hit_pnt_;
}

void FragTrap::takeDamage(unsigned int amount) {
  if (IsExhausted("FragTrap ") == true) {
    return;
  }
  amount = hit_pnt_ < amount ? hit_pnt_ : amount;
  std::cout << "FragTrap " << name_ << " takes " << amount
            << " points of damage!\n";
  hit_pnt_ -= amount;
}

void FragTrap::beRepaired(unsigned int amount) {
  if (IsExhausted("FragTrap ") == true) {
    return;
  }
  unsigned int max = std::numeric_limits<unsigned int>::max();
  amount = max - hit_pnt_ > amount ? amount : max - hit_pnt_;
  std::cout << "FragTrap " << name_ << " repairs, getting " << amount
            << " points of damage!\n";
  --energy_pnt_;
  hit_pnt_ += amount;
}

void FragTrap::highFivesGuys() {
  std::cout << "FragTrap " << name_ << ": \"High five guys!\"\n";
}
