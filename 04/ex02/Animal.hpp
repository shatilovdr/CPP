/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:05:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/16 15:07:14 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <string>

class Animal {
 public:
  Animal();
  Animal(const Animal& other);
  Animal& operator=(const Animal& other);

  virtual ~Animal() = 0;

  const std::string&  getType() const;
  virtual void makeSound() const = 0;

 protected:
  explicit Animal(const std::string& type);

  std::string type_;
};

#endif