/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:54:51 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/22 17:26:16 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(const std::string& str) : str_(str) {}

void RPN::CalculateExpression() {
  if (CheckInput()) 
    PerformOperations();
  else
    std::cerr << "Error\n";
}

bool RPN::CheckInput() {
  if (!std::regex_match(str_, std::regex(R"(\s*(\d?[\+\-\*/\s])*)")))
    return false;
  str_.erase(std::remove_if(str_.begin(), str_.end(), ::isspace), str_.end());
  if (!isdigit(str_[0]))
    return false;
  size_t  counter = 1;
  for (size_t i = 1; i < str_.size(); ++i) {
    if (isdigit(str_[i]))
      ++counter;
    else
      --counter;
    if (counter == 0)
      return false;
  }
  return counter == 1 ? true : false;
}

void RPN::PerformOperations() {
  stack_.push(str_[0] - '0');
  for (size_t i = 1; i < str_.size(); ++i) {
    if (isdigit(str_[i])) {
      stack_.push(str_[i] - '0');
      continue;
    }
    float second_num = stack_.top();
    stack_.pop();
    float first_num = stack_.top();
    stack_.pop();
    switch (str_[i])
    {
    case '+':
      first_num += second_num;
      break;
    case '-':
      first_num -= second_num;
      break;
    case '*':
      first_num *= second_num;
      break;
    case '/':
      if (second_num == 0.0f) {
        std::cerr << "Error\n";
        return;
      }
      first_num /= second_num;
      break;
    }
    stack_.push(first_num);
  }
  std::cout << stack_.top() << '\n';
}