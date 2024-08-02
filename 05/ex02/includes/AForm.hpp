/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:28:03 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/02 13:07:10 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
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
  AForm() = delete;
  AForm(std::string name, int sign_grade, int execute_grade);
  AForm(const AForm& other)            = default;
  AForm& operator=(const AForm& other) = delete;

  ~AForm() = default;

  std::string getName() const;
  bool        getSignSatus() const;
  int         getSignGrade() const;
  int         getExecuteGrade() const;
  void        beSigned(Bureaucrat& b);

 private:
  const std::string name_;
  bool              sign_status_;
  const int         sign_grade_;
  const int         execute_grade_;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif