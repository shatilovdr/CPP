/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:57:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 19:03:12 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP_
#define DIAMOND_TRAP_HPP_

#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 public:
  DiamondTrap() = delete;
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap& other);
  DiamondTrap& operator=(const DiamondTrap& other);

  ~DiamondTrap();

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void whoAmI();

 private:
  std::string name_;
};

#endif