/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:55:43 by dshatilo          #+#    #+#             */
/*   Updated: 2024/05/31 16:51:18 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		true_original = "HI THIS IS BRAIN";
	std::string*	pointer = &true_original;
	std::string&	reference = true_original;

	std::cout << "The memory address of the stringVAR\t" << &true_original << '\n';
	std::cout << "The memory address held by stringPTR\t" << pointer << '\n';
	std::cout << "The memory address held by stringREF\t" << &reference << '\n';
	std::cout << '\n';
	std::cout << "The value of the stringVAR\t\t" << true_original << '\n';
	std::cout << "The value pointed to by stringPTR\t" << *pointer << '\n';
	std::cout << "The value pointed to by stringREF\t" << reference << '\n';
	return 0;
}
