/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:03:32 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/25 21:23:03 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <limits>

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
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

void FragTrap::highFivesGuys() {
  std::cout << "FragTrap " << name_ << ": \"High five guys!\"\n";
}
