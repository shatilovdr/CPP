/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:52:50 by dshatilo          #+#    #+#             */
/*   Updated: 2024/05/31 17:24:58 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP_
# define HUMANA_HPP_
# include <iostream>
# include "Weapon.hpp"

class HumanA {
public:
	HumanA(const std::string& name, const Weapon& weapon);
	~HumanA();
	void		attack(void);
private:
	std::string	_name;
	Weapon		_weapon;
};


#endif