/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:20:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/07 16:57:13 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALAR_CONVERTER_HPP_
#define SCALAR_CONVERTER_HPP_


#include <iostream>
#include <string>
#include <regex>

typedef struct s_types
{
  char   c;
  int    i;
  float  f;
  double d;
} t_types;


class ScalarConverter {
 public:
  ScalarConverter() = delete;
  ScalarConverter(const ScalarConverter& other) = delete;
  ScalarConverter& operator=(const ScalarConverter& other) = delete;

  ~ScalarConverter() = delete;

  static void convert(const std::string& str);

 private:
  static void convertFromInt(const std::string& str);
  static void convertFromChar(const std::string& str);
  static void convertFromFloat(const std::string& str);
  static void convertFromDouble(const std::string& str);
  static void printValues(const t_types& types);
};

#endif