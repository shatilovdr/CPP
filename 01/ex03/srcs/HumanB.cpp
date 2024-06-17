/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:54:41 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/03 13:37:12 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name)
{};

HumanB::~HumanB(){};

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon->getType() << '\n';
}

void	HumanB::setWeapon(const Weapon& weapon)
{
	_weapon = &weapon;
}