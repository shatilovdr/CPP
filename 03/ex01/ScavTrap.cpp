/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:03:32 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 12:32:50 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  std::cout << "ScavTrap constructor with parameter called\n";
  hit_pnt_    = 100;
  energy_pnt_ = 50;
  attack_dmg_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
  std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  std::cout << "ScavTrap copy assignment operator called\n";
  ClapTrap::operator=(other);
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap is now in Gate keeper mode.\n";
}
