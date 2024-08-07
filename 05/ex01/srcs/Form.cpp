/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:22:40 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/06 15:49:46 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sign_grade, int execute_grade)
    : name_(name),
      sign_status_(false),
      sign_grade_(sign_grade),
      execute_grade_(execute_grade) {
  if (sign_grade_ < 1 || execute_grade_ < 1) {
    throw Form::GradeTooHighException();
  }
  if (sign_grade_ > 150 || execute_grade_ > 150) {
    throw Form::GradeTooLowException();
  }
}

std::string Form::getName() const {
  return name_;
}

bool Form::getSignSatus() const {
  return sign_status_;
}

int Form::getSignGrade() const {
  return sign_grade_;
}

int Form::getExecuteGrade() const {
  return execute_grade_;
}

bool Form::beSigned(const Bureaucrat& b) {
  if (b.getGrade() > sign_grade_) {
    throw Form::GradeTooLowException();
  }
  if (sign_status_ == true) {
    return false;
  }
  sign_status_ = true;
  return true;
}

std::ostream& operator<<(std::ostream& out, const Form& obj) {
  std::cout << obj.getName()
            << ", sign status: " << (obj.getSignSatus() ? "true" : "false")
            << ", sign grade: " << obj.getSignGrade()
            << ", execute grade: " << obj.getExecuteGrade();
  return out;
}