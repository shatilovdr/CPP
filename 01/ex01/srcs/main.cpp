/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:55:43 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/17 11:01:06 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int	N = 5;
	Zombie*	horde = zombieHorde(N, "Necrotar");
	if (horde == NULL)
		return 1;
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
