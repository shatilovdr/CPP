/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:57:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 12:12:51 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP_
#define SCAV_TRAP_HPP_

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap() = delete;
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& other);
  ScavTrap& operator=(const ScavTrap& other);

  ~ScavTrap();

  void guardGate();
};

#endif