/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:06:07 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/02 13:06:09 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

AForm::AForm(std::string name, int sign_grade, int execute_grade)
    : name_(name),
      sign_status_(false),
      sign_grade_(sign_grade),
      execute_grade_(execute_grade) {
  if (sign_grade_ < 1 || execute_grade_ < 1) {
    throw AForm::GradeTooHighException();
  }
  if (sign_grade_ > 150 || execute_grade_ > 150) {
    throw AForm::GradeTooLowException();
  }
}

std::string AForm::getName() const {
  return name_;
}

bool AForm::getSignSatus() const {
  return sign_status_;
}

int AForm::getSignGrade() const {
  return sign_grade_;
}

int AForm::getExecuteGrade() const {
  return execute_grade_;
}

void AForm::beSigned(Bureaucrat& b) {
  if (b.getGrade() > sign_grade_) {
    throw AForm::GradeTooLowException();
  }
  sign_status_ = true;
}

std::ostream& operator<<(std::ostream& out, const AForm& obj) {
  std::cout << obj.getName()
            << ", sign status: " << (obj.getSignSatus() ? "true" : "false")
            << ", sign grade: " << obj.getSignGrade()
            << ", execute grade: " << obj.getExecuteGrade() << '\n';
  return out;
}