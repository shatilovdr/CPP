/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:28:03 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/01 23:34:53 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_

#include <iostream>
#include <string>

class Form {
 public:
  class GradeTooHighException : public std::exception {
   public:
    const char* what() const noexcept {
      return "grade is too high!\n";
    }
  };
  class GradeTooLowException : public std::exception {
   public:
    const char* what() const noexcept {
      return "grade is too low!\n";
    }
  };
  Form() = delete;
  Form(std::string name, int sign_grade, int execute_grade);
  Form(const Form& other) = default;
  Form& operator=(const Form& other) = delete;

  ~Form() = default;

  std::string getName() const;
  bool        getSignSatus() const;
  int         getSignGrade() const;
  int         getExecuteGrade() const;


 private:
  const std::string name_;
  bool              sign_status_;
  const int         sign_grade_;
  const int         execute_grade_;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif