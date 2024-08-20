/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:34:57 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/21 11:56:24 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP_
#define BITCOIN_EXCHANGE_HPP_

#include <algorithm>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <regex>
#include <sstream>
#include <stdexcept>
#include <string>

class BitcoinExchange {
 public:
  BitcoinExchange()                                        = delete;
  BitcoinExchange(const BitcoinExchange& other)            = delete;
  BitcoinExchange& operator=(const BitcoinExchange& other) = delete;

  ~BitcoinExchange() = delete;

  static void Exchange(const std::string& database);

 private:
  static void LoadTable();
  static void ReadFile(const std::string& database);
  static void ParseAndPrintLine(const std::string& line);
  static bool CheckDate(const std::string& date);
  static void PrintPair(const std::string& date, float value);

  static std::map<const std::string, const float> table_;
  static constexpr float                          MAX_ALLOWED_VALUE = 1000.0f;
  static constexpr float                          MIN_ALLOWED_VALUE = 0.0f;
};

#endif
