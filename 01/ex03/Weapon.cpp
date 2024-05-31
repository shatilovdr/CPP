/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:54:41 by dshatilo          #+#    #+#             */
/*   Updated: 2024/05/31 17:11:45 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type){};

Weapon::~Weapon(){};

const std::string&	Weapon::getType(void)
{
	return type;
}
void		Weapon::setType(const std::string& type)
{
	this->type = type;
}
