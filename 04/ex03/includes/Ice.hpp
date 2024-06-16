/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 09:27:26 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/16 18:44:17 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP_
#define ICE_HPP_

#include <string>
#include "Amateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
 public:
  Ice();
  Ice(const Ice& other);
  Ice& operator=(const Ice& other);

  ~Ice() override;

  Ice* clone() const override;
  void use(ICharacter& target) override;
};

#endif