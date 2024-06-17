/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:13:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/17 10:59:30 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

# include <iostream>

class Zombie {
 public:
  Zombie();
  Zombie(std::string name);

  ~Zombie();

  void  announce(void);
  void  setName(const std::string& name);

 private:
  std::string	name_;
};

#endif