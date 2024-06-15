/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:49:12 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 14:49:15 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat();
  WrongCat(const WrongCat& other);
  WrongCat& operator=(const WrongCat& other);

  ~WrongCat();

  void makeSound() const;
};

#endif