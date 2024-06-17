/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:54:41 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/04 22:25:27 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	const std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	MemberFunction	methods[4] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int i = 0;
	while(i < 4)
	{
		if(levels[i] == level)
		{
			(this->*methods[i])();
			return;
		}
		i++;
	}
	std::cerr << "Invalid level: " << level << '\n';
}
void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
				"-pickle-special-ketchup burger. I really do!" << '\n';
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
				" You didn't put enough bacon in my burger!"
				" If you did, I wouldn't be asking for more!" << '\n';
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
				" I've been coming for years whereas you started working here"
				" since last month." << '\n';
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable!"
				" I want to speak to the manager now." << '\n';
}
