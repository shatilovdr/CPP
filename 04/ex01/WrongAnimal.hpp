/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:29:01 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 14:29:25 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <string>

class WrongAnimal {
 public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& other);
  WrongAnimal& operator=(const WrongAnimal& other);

  ~WrongAnimal();

  std::string getType() const;
  void        makeSound() const;

 protected:
  explicit WrongAnimal(std::string type);

  std::string type_;
};

#endif