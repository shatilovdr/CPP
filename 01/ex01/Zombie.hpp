/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:13:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/05/31 16:29:25 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <iostream>

class Zombie {
public:
	Zombie();
	Zombie(std::string name);
	void		announce(void);
	void		setName(const std::string& name);
	~Zombie();

private:
	std::string	_name;
};

Zombie*			zombieHorde(int N, std::string name);

#endif