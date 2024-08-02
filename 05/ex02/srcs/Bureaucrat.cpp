/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:22:40 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/02 19:00:43 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
    : name_(name), grade_(grade) {
  if (grade_ < 1) {
    throw Bureaucrat::GradeTooHighException();
  }
  if (grade_ > 150) {
    throw Bureaucrat::GradeTooLowException();
  }
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
    : name_(other.name_), grade_(other.grade_) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) & {
  if (&other == this) {
    return *this;
  }
  grade_ = other.grade_;
  return *this;
}

std::string Bureaucrat::getName() const {
  return name_;
}

int Bureaucrat::getGrade() const {
  return grade_;
}

void Bureaucrat::promote() {
  if (grade_ == 1) {
    throw Bureaucrat::GradeTooHighException();
  }
  grade_ -= 1;
}

void Bureaucrat::demote() {
  if (grade_ == 150) {
    throw Bureaucrat::GradeTooLowException();
  }
  grade_ += 1;
}

void Bureaucrat::signForm(AForm& f) {
  try {
    f.beSigned(*this);
  } catch (AForm::GradeTooLowException e) {
    std::cout << name_ << " couldn’t sign " << f.getName() << " because "
              << e.what();
    return;
  }
  std::cout << name_ << " signed " << f.getName() << '\n';
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj) {
  out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << '\n';
  return out;
}