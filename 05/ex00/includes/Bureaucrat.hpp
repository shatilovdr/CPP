/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:07:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/06 14:58:10 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>
#include <string>

class Bureaucrat {
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
  Bureaucrat() = delete;
  Bureaucrat(std::string name, int grade);
  Bureaucrat(const Bureaucrat& other) = default;
  Bureaucrat& operator=(const Bureaucrat& other) &;

  ~Bureaucrat() = default;

  std::string getName() const;
  int         getGrade() const;
  void        promote();
  void        demote();

 private:
  const std::string name_;
  int               grade_;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif