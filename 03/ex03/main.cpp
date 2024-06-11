/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:51:44 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 19:15:11 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  {
    ClapTrap mike("Mike");
    ClapTrap bob("Bob");

    bob.attack("Mike");
    mike.takeDamage(3);
    mike.beRepaired(4);
  }
  std::cout << '\n';
  {
    ScavTrap mike("Mike");
    ScavTrap bob("Bob");

    bob.attack("Mike");
    mike.takeDamage(20);
    mike.beRepaired(25);
    mike.guardGate();
  }
  std::cout << '\n';
  {
    FragTrap mike("Mike");
    FragTrap bob("Bob");

    bob.attack("Mike");
    mike.takeDamage(30);
    mike.beRepaired(35);
    mike.highFivesGuys();
  }
  std::cout << '\n';
  {
    DiamondTrap mike("Mike");
    DiamondTrap bob("Bob");

    bob.attack("Mike");
    mike.takeDamage(30);
    mike.beRepaired(35);
    mike.whoAmI();
  }
  return 0;
}
