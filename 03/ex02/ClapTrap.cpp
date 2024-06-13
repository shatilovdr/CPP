/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:03:32 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 18:34:19 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <limits>


ClapTrap::ClapTrap(std::string name)
    : name_(name), hit_pnt_(10), energy_pnt_(10), attack_dmg_(0) {
  std::cout << "ClapTrap " << name_ << " constructor with parameter called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name_(other.name_),
      hit_pnt_(other.hit_pnt_),
      energy_pnt_(other.energy_pnt_),
      attack_dmg_(other.attack_dmg_) {
  std::cout << "ClapTrap " << name_ << " copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  std::cout << "ClapTrap " << name_ << " copy assignment operator called\n";
  if (this == &other) {
    return *this;
  }
  name_       = other.name_;
  hit_pnt_    = other.hit_pnt_;
  energy_pnt_ = other.energy_pnt_;
  attack_dmg_ = other.attack_dmg_;
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << name_ << " destructor called\n";
}

void ClapTrap::attack(const std::string& target) {
  if (IsExhausted("ClapTrap ") == true) {
    return;
  }
  std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing "
            << attack_dmg_ << " points of damage!\n";
  --hit_pnt_;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (IsExhausted("ClapTrap ") == true) {
    return;
  }
  amount = hit_pnt_ < amount ? hit_pnt_ : amount;
  std::cout << "ClapTrap " << name_ << " takes " << amount
            << " points of damage!\n";
  hit_pnt_ -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (IsExhausted("ClapTrap ") == true) {
    return;
  }
  unsigned int max = std::numeric_limits<unsigned int>::max();
  amount = max - hit_pnt_ > amount ? amount : max - hit_pnt_;
  std::cout << "ClapTrap " << name_ << " repairs, getting " << amount
            << " points of damage!\n";
  --energy_pnt_;
  hit_pnt_ += amount;
}

ClapTrap::ClapTrap(std::string  name,
                   unsigned int hit_pnt,
                   unsigned int energy_pnt,
                   unsigned int attack_dmg)
    : name_(name),
      hit_pnt_(hit_pnt),
      energy_pnt_(energy_pnt),
      attack_dmg_(attack_dmg) {
  std::cout << "ClapTrap " << name_
            << " constructor with all parameters called\n";
}

bool ClapTrap::IsExhausted(std::string type) {
  if (energy_pnt_ <= 0 || hit_pnt_ <= 0) {
    std::cout << type << name_ << " is exhausted\n";
    return true;
  } else {
    return false;
  }
}