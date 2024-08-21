/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:55:17 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/21 14:29:45 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP_
#define RPN_HPP_

#include <cctype>
#include <iostream>
#include <regex>
#include <stack>
#include <string>

class RPN {
 public:
  RPN() = delete;
  RPN(const std::string& str);
  RPN(const RPN& other)            = delete;
  RPN& operator=(const RPN& other) = delete;

  ~RPN() = default;

  void  CalculateExpression();

 private:
  bool  CheckInput();
  void  PerformOperations();

  std::string       str_;
  std::stack<float> stack_;
};

#endif
