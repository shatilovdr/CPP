/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:28:03 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/06 14:36:30 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
 public:
  class GradeTooHighException : public std::exception {
   public:
    const char* what() const noexcept override {
      return "grade is too high!";
    }
  };
  class GradeTooLowException : public std::exception {
   public:
    const char* what() const noexcept override {
      return "grade is too low!";
    }
  };
  class FormNotSignedException : public std::exception {
   public:
    const char* what() const noexcept override {
      return "form is not signed!";
    }
  };
  AForm() = delete;
  AForm(std::string name,
        int         sign_grade,
        int         execute_grade,
        std::string target);
  AForm(const AForm& other)            = default;
  AForm& operator=(const AForm& other) = delete;

  virtual ~AForm() = default;

  std::string getName() const;
  bool        getSignSatus() const;
  int         getSignGrade() const;
  int         getExecuteGrade() const;
  std::string getTarget() const;
  bool        beSigned(const Bureaucrat& b);
  void        execute(const Bureaucrat& executor) const;

 protected:
  virtual void doExecution() const = 0;

 private:
  const std::string name_;
  bool              sign_status_;
  const int         sign_grade_;
  const int         execute_grade_;
  const std::string target_;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif