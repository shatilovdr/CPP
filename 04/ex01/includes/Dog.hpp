/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:06:40 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 17:44:19 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 public:
  Dog();
  Dog(const Dog& other);
  Dog& operator=(const Dog& other);

  ~Dog() override;

  void makeSound() const override;
  void AddIdea(const std::string& idea) const;
  void PrintIdeas() const;

 private:
  Brain* const brain_;
};

#endif