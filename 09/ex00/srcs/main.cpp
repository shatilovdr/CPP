/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:36:09 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/14 18:58:25 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Usage: ./bts [filename]\n";
    return 0;
  }
  try {
    BitcoinExchange::Exchange(argv[1]);
  } catch (std::exception& e) {
    std::cout << e.what() << '\n';
  }
}

