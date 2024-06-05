/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:51:26 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/05 11:25:46 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{	
	PhoneBook	phonebook;
	bool		active = true;
	std::string	cmd;
	
	while (active)
	{
		std::cout << "Input a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			active = false;
			continue;
		}
		active = phonebook.Run(cmd);
	}
	std::cout << "Goodbye.\n";
	return 0;
}
