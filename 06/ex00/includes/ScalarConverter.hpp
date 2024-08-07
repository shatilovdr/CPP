/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:20:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/07 11:26:20 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALAR_CONVERTER_HPP_
#define SCALAR_CONVERTER_HPP_


#include <iostream>
#include <string>

class ScalarConverter {
 public:
  ScalarConverter() = delete;
  ScalarConverter(const ScalarConverter& other) = delete;
  ScalarConverter& operator=(const ScalarConverter& other) = delete;

  ~ScalarConverter() = delete;

  static void convert(const std::string& str);

 private:
};

#endif