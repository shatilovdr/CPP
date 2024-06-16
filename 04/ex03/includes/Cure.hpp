/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 09:27:26 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/16 18:44:13 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP_
#define CURE_HPP_

#include <string>
#include "Amateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
 public:
  Cure();
  Cure(const Cure& other);
  Cure& operator=(const Cure& other);

  ~Cure() override;

  Cure* clone() const override;
  void use(ICharacter& target) override;
};

#endif