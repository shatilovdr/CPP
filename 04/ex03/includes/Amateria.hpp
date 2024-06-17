/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 09:27:26 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/17 20:47:02 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
 public:
  AMateria() = delete;
  AMateria(const AMateria& other);
  AMateria(std::string const& type);
  AMateria& operator=(const AMateria& other);

  virtual ~AMateria() = 0;

  std::string const& getType() const;
  virtual AMateria*  clone() const           = 0;
  virtual void       use(ICharacter& target) = 0;

 protected:
  std::string type_;
};

#endif