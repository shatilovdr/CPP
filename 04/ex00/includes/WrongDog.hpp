/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:49:37 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 14:50:07 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP_
#define WRONGDOG_HPP_

#include <string>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
 public:
  WrongDog();
  WrongDog(const WrongDog& other);
  WrongDog& operator=(const WrongDog& other);

  ~WrongDog();

  void makeSound() const;
};

#endif