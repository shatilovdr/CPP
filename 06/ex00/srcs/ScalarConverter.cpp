/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:20:12 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/07 17:23:18 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


void ScalarConverter::convert(const std::string& str) {
  std::regex int_ ("\\d+"); //add negative numbers support!
  std::regex float_ ("\\d+\\.\\d*f|\\d*\\.\\d+f");
  std::regex double_ ("\\d+\\.\\d*|\\d*\\.\\d+");

  if (std::regex_match (str,int_)) {
    convertFromInt(str);
  } else if (str.length() == 1) {
      convertFromChar(str);
  } else if (str == "inff" || str == "+inff" || str == "-inff"
      || std::regex_match (str,float_)) {
    convertFromFloat(str);
  } else if (str == "inf" || str == "+inf" || str == "-inf"
      || std::regex_match (str,double_)) {
    convertFromDouble(str);
  } else {
    std::cout << "char: impossible\n"
              << "int: impossible\n"
              << "float: nanf\n"
              << "double: nan\n";
  }
}


void ScalarConverter::convertFromInt(const std::string& str) {
  t_types types;

  try {
    types.i = std::stoi(str);
    types.c = types.i >=0 && types.i <= 127 ? static_cast<char>(types.i) : -1; //add char behavior
    types.f = types.i;
    types.d = types.i;
    printValues(types);
  } catch (std::out_of_range& e ) {
    convertFromFloat(str);
  }
}

void ScalarConverter::convertFromChar(const std::string& str) {
    t_types types;

    types.c = str[0];
    types.i = types.c;
    types.f = types.c;
    types.d = types.c;
    printValues(types);
}

void ScalarConverter::convertFromFloat(const std::string& str) {
  t_types types;

  try {
    types.f = std::stof(str);
    types.c = static_cast<char>(types.i);
    types.f = types.i;
    types.d = types.i;
    printValues(types);
  } catch (std::out_of_range& e ) {
    convertFromDouble(str);
  }
}

void ScalarConverter::convertFromDouble(const std::string& str) {
  t_types types;

  try {
    types.f = std::stof(str);
    types.c = static_cast<char>(types.i);
    types.f = types.i;
    types.d = types.i;
    printValues(types);
  } catch (std::out_of_range& e ) {
    std::cout << "char: impossible\n"
              << "int: impossible\n"
              << "float: nanf\n"
              << "double: nan\n";
  }
}

void ScalarConverter::printValues(const t_types& types) {
  if (std::isprint(types.c)) {
    std::cout << "char: " << types.c << '\n';
  } else {
    std::cout << "char: " << (types.i >= 0 && types.i <= 127 ? "Non displayable" : "impossible")  << '\n';
  }
  std::cout << "int: " << types.i << '\n';
  std::cout << "float: " << types.f << '\n';
  std::cout << "double: " << types.d << '\n';
}