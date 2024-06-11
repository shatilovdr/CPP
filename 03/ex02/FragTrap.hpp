/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:57:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/11 16:00:27 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP_
#define FRAG_TRAP_HPP_

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
  FragTrap() = delete;
  FragTrap(std::string name);
  FragTrap(const FragTrap& other);
  FragTrap& operator=(const FragTrap& other);

  ~FragTrap();

  void highFivesGuys(void);
};

#endif