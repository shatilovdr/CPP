/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:22:40 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/06 16:30:41 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm* Intern::makeForm(const std::string& name, const std::string& target) {
  AForm*                   out;
  static const std::string levels[] = {
      "shrubbery creation", "robotomy request", "presidential pardon"};
  int i = 0;
  while (i < 3) {
    if (levels[i] == name) {
      break;
    }
    i++;
  }
  switch (i) {
    case 0: {
      out = new ShrubberyCreationForm(target);
      break;
    }
    case 1: {
      out = new RobotomyRequestForm(target);
      break;
    }
    case 2: {
      out = new PresidentialPardonForm(target);
      break;
    }
    default: {
      throw Intern::FormDoesntExistException();
    }
  }
  std::cout << "The form: \"" << *out << "\" has been successfully created.\n";
  return out;
}
