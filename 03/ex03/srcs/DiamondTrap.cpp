/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:03:32 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 16:14:56 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <limits>

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name", 100, 50, 30),
      FragTrap(name),
      ScavTrap(name),
      name_(name) {
  std::cout << "DiamondTrap " << name_
            << " constructor with parameter called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other), name_(other.name_) {
  std::cout << "DiamondTrap " << name_ << " copy constructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
  std::cout << "DiamondTrap " << name_ << " copy assignment operator called\n";
  ClapTrap::operator=(other);
  return *this;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap " << name_ << " destructor called\n";
}

void DiamondTrap::attack(const std::string& target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
  std::cout << "My name is " << name_ << "... " << ClapTrap::name_ << ".\n";
}