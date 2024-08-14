/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:36:40 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/14 18:56:51 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void BitcoinExchange::LoadTable(void) {
  std::ifstream  input;

  input.open("data.csv");
  if (input.is_open() == false) { 
    throw std::runtime_error("Failed to open file: data.csv");
  }
}

void BitcoinExchange::Exchange(const std::string& database) {
  LoadTable();
  (void)database;
}