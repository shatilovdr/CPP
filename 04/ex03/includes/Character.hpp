/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 16:35:00 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/16 18:44:08 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <string>
#include "ICharacter.hpp"

#define INVENTORY_CAPACITY 4

class Character : public ICharacter{
 public:
  Character() = delete;
  Character(std::string const& name);
  Character(const Character& other);
  Character& operator=(const Character& other);

  ~Character() override;

  std::string const& getName() const override;
  void               equip(AMateria* m) override;
  void               unequip(int idx) override;
  void               use(int idx, ICharacter& target) override;

 private:
  std::string name_;
  AMateria *inventory[INVENTORY_CAPACITY];
};

#endif