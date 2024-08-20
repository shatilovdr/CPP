/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:36:40 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/20 16:38:11 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<const std::string, const float> BitcoinExchange::table_;

void BitcoinExchange::Exchange(const std::string& database) {
  LoadTable();
  ReadFile(database);
}

void BitcoinExchange::LoadTable() {
  std::ifstream input("data.csv");

  if (!input.is_open()) {
    throw std::runtime_error("Failed to open file: data.csv");
  }
  std::string line;
  std::getline(input, line);
  if ( line != "date,exchange_rate") {
    throw std::runtime_error("Invalid database file: data.csv");
  }
  while (std::getline(input, line, ',')) {
    std::string str_rate;
    std::getline(input, str_rate); 
    BitcoinExchange::table_.insert({line, std::stof(str_rate)});
  }
}

void BitcoinExchange::ReadFile(const std::string& database) {
  std::ifstream input(database);

  if (!input.is_open()) {
    throw std::runtime_error("Failed to open file " + database);
  }
  std::string line;
  std::getline(input, line);
  if (!std::regex_match(line, std::regex(R"(\s*date\s*\|\s*value\s*)"))) {
    throw std::runtime_error("Invalid database file: " + database);
  }
  std::regex pattern(R"(\d{4}-\d{2}-\d{2}\|[-+]?(\d+\.?\d*|\d*\.?\d+))");
  while (std::getline(input, line)) {
    line.erase(std::remove_if(line.begin(), line.end(), ::isspace), line.end());
    if (!std::regex_match(line, pattern)) {
      std::cout << "Error: bad input => " << line << '\n';
      continue;
    }
    ParseAndPrintLine(line);
  }
}

void BitcoinExchange::ParseAndPrintLine(const std::string& line) {
  size_t             delimeter = line.find('|');
  const std::string  date = line.substr(0, delimeter);

  if (!CheckDate(date)) {
    std::cout << "Error: bad input => " << date << '\n';
    return;
  }
  try {
    float value = std::stof(line.substr(delimeter + 1));
    if (value > MAX_ALLOWED_VALUE) {
      throw std::out_of_range("large number");
    } else if (value < MIN_ALLOWED_VALUE) {
      std::cout << "Error: not a positive number.\n";
      return;
    }
    PrintPair(date, value);
  } catch (std::out_of_range& e) {
    std::cout << "Error: too large a number.\n";
    return;
  }
}

bool BitcoinExchange::CheckDate(const std::string& date) {
  std::istringstream ss(date);
  std::tm tm = {};
  ss >> std::get_time(&tm, "%Y-%m-%d");
  if (ss.fail()) {
    return false;
  }
  static const int m_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int days = m_days[tm.tm_mon];
  if (tm.tm_mon == 1) {
    int year = tm.tm_year + 1900;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
      days = 29;
    }
  }
  if (tm.tm_mday > days) {
    return false;
  }
  return true;
}

void BitcoinExchange::PrintPair(const std::string& date, float value) {
  auto  upper = --table_.upper_bound(date);
  float rate;
  if (date.compare((*table_.begin()).first) < 0)
    rate = 0;
  else
    rate = (*upper).second;
  std::cout << date << " => " << value << " = " << value * rate << '\n';
}
