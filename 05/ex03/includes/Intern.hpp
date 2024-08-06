/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:07:04 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/06 16:13:06 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP_
#define INTERN_HPP_

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
 public:
  class FormDoesntExistException : public std::exception {
   public:
    const char* what() const noexcept override {
      return "form doesn't exist!";
    }
  };
  Intern()                                 = default;
  Intern(const Intern& other)              = default;
  Intern& operator=(const Intern& other) & = default;

  ~Intern() = default;

  AForm* makeForm(const std::string& name, const std::string& target);
};

#endif