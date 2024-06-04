/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:55:43 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/04 22:11:09 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Substitute.hpp"

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sifl filename string1 string2\n";
		return 1;
	}
	else
	{
		Substitute	subs(argv[1], argv[2], argv[3]);
		return subs.ReadWriteFile();
	}
}
