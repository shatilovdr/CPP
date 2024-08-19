/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:36:40 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/19 18:10:30 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<const std::string, const float> BitcoinExchange::table_;

void BitcoinExchange::Exchange(const std::string& database) {
  LoadTable();
  ReadFile(database);
}

void BitcoinExchange::LoadTable() {
  std::ifstream  input("data.csv");

  if (input.is_open() == false) { 
    throw std::runtime_error("Failed to open file: data.csv");
  }
  std::string  line;
  std::string  str_rate;
  std::getline(input, line);
  if ( line != "date,exchange_rate") {
    throw std::runtime_error("Invalid database file: data.csv");
  }
  while (std::getline(input, line, ',')) {
    std::getline(input, str_rate); 
    BitcoinExchange::table_.insert({line, std::stof(str_rate)});
  }
}

void BitcoinExchange::ReadFile(const std::string& database) {
  std::ifstream  input(database);

  if (input.is_open() == false) {
    throw std::runtime_error("Failed to open file " + database);
  }
  std::string  line;
  std::getline(input, line);
  if (std::regex_match(line, std::regex("\\s*date\\s*\\|\\s*value\\s*")) == false) {
    throw std::runtime_error("Invalid database file: " + database);
  }
  std::string  date;
  std::string  str_value;
  std::regex   pattern("\\d{4}-\\d{2}-\\d{2}\\|[-+]?(\\d+\\.\\d*|\\d*\\.\\d+)");
  while (std::getline(input, line)) {
    line.erase(std::remove_if(line.begin(), line.end(), ::isspace), line.end());
    if (!std::regex_match(line, pattern)) {
      std::cout << "Incorrect input: " << line << '\n';
      continue;
    }
    size_t delimeter = line.find('|');
    date = line.substr(0, delimeter);
    str_value = line.substr(delimeter + 1);
    std::cout << date << " " << str_value << '\n';
  }
}
