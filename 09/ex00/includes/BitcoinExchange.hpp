/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:34:57 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/19 18:09:19 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP_
#define BITCOIN_EXCHANGE_HPP_

#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <regex>
#include <sstream>
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

  static std::map<const std::string, const float> table_;
};

#endif
