/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:51:44 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 18:43:35 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
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
    mike.beRepaired(4);
    mike.guardGate();
  }
  return 0;
}
