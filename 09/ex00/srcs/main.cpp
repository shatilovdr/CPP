/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:36:09 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/20 16:30:26 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Error: could not open file.\n";
    return 0;
  }
  try {
    BitcoinExchange::Exchange(argv[1]);
  } catch (std::exception& e) {
    std::cout << e.what() << '\n';
  }
}
