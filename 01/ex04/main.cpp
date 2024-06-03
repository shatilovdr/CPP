/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:55:43 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/03 18:26:25 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <bitset>

int	ReadReplaceWrite(char** argv);

int main(int argc, char** argv)
{
	(void)argv;
	if (argc != 4)
	{
		std::cout << "Usage: ./sifl filename string1 string2\n";
		return 1;
	}
	else
		return ReadReplaceWrite(argv + 1);
}

int	ReadReplaceWrite(char** argv)
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		line;

	input.open(argv[0]);
	if (input.is_open() == false)
	{
		std::cout << "Can't open: " << argv[0] << '\n';
		return 1;			
	}
	while (std::getline(input, line))
	{
		
	}
	input.close();
	return 0;
}
