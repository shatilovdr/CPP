/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:52:50 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/03 13:36:56 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
# define HUMANB_HPP_
# include <iostream>
# include "Weapon.hpp"

class HumanB {
public:
	HumanB(const std::string& name);
	~HumanB();
	void		attack(void);
	void		setWeapon(const Weapon& weapon);
private:
	std::string		_name;
	const Weapon*	_weapon;
};


#endif