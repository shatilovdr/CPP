/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:20:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/08 22:39:37 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP_
#define SCALAR_CONVERTER_HPP_

#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <regex>
#include <string>

class ScalarConverter {
 public:
  static void convert(const std::string& str);

 private:
  ScalarConverter()                                        = default;
  ScalarConverter(const ScalarConverter& other)            = default;
  ScalarConverter& operator=(const ScalarConverter& other) = default;

  ~ScalarConverter() = default;

  static void convertFromInt(const std::string& str);
  static void convertFromChar(const std::string& str);
  static void convertFromFloat(const std::string& str);
  static void convertFromDouble(const std::string& str);
  static void printValues();

  static char   c;
  static int    i;
  static float  f;
  static double d;
};

#endif