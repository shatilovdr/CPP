/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:52:50 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/03 13:58:40 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
# define WEAPON_HPP_

# include <string>

class Weapon {
public:
	Weapon(const std::string& type);
	~Weapon();
	const std::string&	getType(void) const;
	void				setType(const std::string& type);

private:
	std::string	_type;
};


#endif