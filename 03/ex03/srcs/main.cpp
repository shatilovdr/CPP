/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:51:44 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/25 13:58:39 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  {
    std::cout << "EX00_TESTS\n";
    ClapTrap mike("Mike");
    ClapTrap bob("Bob");

    bob.attack("Mike");
    mike.takeDamage(3);
    mike.beRepaired(4);
  }
  std::cout << '\n';
  {
    ClapTrap mike("Mike");
    ClapTrap bob("Bob");

    bob.attack("Mike");
    mike.takeDamage(1);
    mike.beRepaired(4);
    for (int i = 1; i < 10; ++i) {
      std::cout << i << ": ";
      bob.attack("Mike");
      std::cout << i << ": ";
      mike.takeDamage(1);
    }
    bob.attack("Mike");
  }
  std::cout << '\n';
  {
    ClapTrap mike("Mike");
    ClapTrap bob("Bob");

    bob.attack("Mike");
    mike.takeDamage(9);
    bob.attack("Mike");
    mike.takeDamage(9);
    bob.attack("Mike");
    mike.takeDamage(9);
  }
  std::cout << '\n';
  
  {
    std::cout << "\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
    std::cout << "EX01_TESTS\n";
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
    mike.beRepaired(4);
    mike.guardGate();
  }
  {
    std::cout << "\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
    std::cout << "EX02_TESTS\n";
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
    std::cout << "\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
    std::cout << "EX03_TESTS\n";
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