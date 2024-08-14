/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:34:57 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/14 18:42:51 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP_
#define BITCOIN_EXCHANGE_HPP_

#include <fstream>
#include <iostream>
#include <map>
#include <string>

class A {
  public:
  A() { std::cout << "A\n";}
  ~A() { std::cout << "~A\n";}
};
class BitcoinExchange {
 public:
  BitcoinExchange()                                         = delete;
  BitcoinExchange(const BitcoinExchange& other)             = delete;
  BitcoinExchange& operator=(const BitcoinExchange& other)  = delete;

  ~BitcoinExchange() = delete;

  static void Exchange(const std::string& database);

 private:
  static void LoadTable(void);

  static A a;
  static std::map<const std::string, const int> table_;

};

#endif