/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:53 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/08 22:39:44 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char* argv[]) {
  if (argc == 2) {
    ScalarConverter::convert(argv[1]);
  } else {
    std::cout << "Incorrect number of arguments! \n";
  }
}
