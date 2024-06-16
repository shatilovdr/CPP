/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 09:37:18 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/16 17:06:36 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP_
#define ICHARACTER_HPP_

#include <string>
#include "Amateria.hpp"

class AMateria;

class ICharacter {
 public:
  virtual ~ICharacter() {}
  virtual std::string const& getName() const                  = 0;
  virtual void               equip(AMateria* m)               = 0;
  virtual void               unequip(int idx)                 = 0;
  virtual void               use(int idx, ICharacter& target) = 0;
};

#endif