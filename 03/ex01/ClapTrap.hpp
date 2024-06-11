/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:57:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 18:27:41 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP_
#define CLAP_TRAP_HPP_

#include <string>

class ClapTrap {
 public:
  ClapTrap() = delete;
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap& other);
  ClapTrap& operator=(const ClapTrap& other);

  ~ClapTrap();

  virtual void attack(const std::string& target);
  virtual void takeDamage(unsigned int amount);
  virtual void beRepaired(unsigned int amount);

 protected:
  ClapTrap(std::string  name,
           unsigned int hit_pnt,
           unsigned int energy_pnt,
           unsigned int attack_dmg);

  bool IsExhausted(std::string type);

  std::string  name_;
  unsigned int hit_pnt_;
  unsigned int energy_pnt_;
  unsigned int attack_dmg_;
};

#endif