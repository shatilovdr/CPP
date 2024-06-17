/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:13:54 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/17 10:46:46 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <iostream>

class Zombie {
public:
	Zombie(std::string name);
	void		announce(void);
	~Zombie();

private:
	std::string	name_;
};

Zombie*			newZombie(std::string name);
void			randomChump(std::string name);
#endif