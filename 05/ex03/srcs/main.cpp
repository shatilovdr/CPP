/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:53 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/06 16:24:15 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

void test0();
void test1();
void test2();

int main() {
  test0();
  test1();
  test2();
}

void test0() {
  std::cout << "--TEST-00--\n";
  Intern     intern;
  AForm*     form = intern.makeForm("robotomy request", "bababa");
  Bureaucrat b("The Guy", 43);
  b.executeForm(*form);
  b.signForm(*form);
  b.promote();
  b.signForm(*form);
  b.executeForm(*form);
  delete form;
}

void test1() {
  std::cout << "\n\n--TEST-01--\n";
  Intern     intern;
  AForm*     form;
  Bureaucrat b("Mikhail", 1);
  form = intern.makeForm("shrubbery creation", "Trees");
  b.signForm(*form);
  b.executeForm(*form);
  delete form;

  form = intern.makeForm("robotomy request", "Puppy");
  b.signForm(*form);
  b.executeForm(*form);
  delete form;

  form = intern.makeForm("presidential pardon", "Madonna");
  b.signForm(*form);
  b.executeForm(*form);
  delete form;
}

void test2() {
  std::cout << "\n\n--TEST-02--\n";
  Intern     intern;
  AForm*     form;
  Bureaucrat b("Mikhail", 1);
  try {
    form = intern.makeForm("RANDOM", "xyz");
    b.signForm(*form);
    b.executeForm(*form);
    delete form;
  } catch (Intern::FormDoesntExistException& e) {
    std::cout << e.what() << '\n';
  }
}