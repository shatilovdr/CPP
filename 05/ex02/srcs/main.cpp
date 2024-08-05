/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:53 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/05 17:01:00 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

void test0();
void test1();
void test2();

int main() {
  test0();
  test1();
//   test2();
}

void test0() {
  std::cout << "--TEST-00--\n";
  ShrubberyCreationForm shrubbery("test");
  AForm& form = shrubbery;
  Bureaucrat b("The Guy", 138);
  b.executeForm(form);
  b.executeForm(shrubbery);
  b.signForm(shrubbery);
  b.executeForm(shrubbery);
  b.promote();
  b.executeForm(form);
}

void test1() {
  std::cout << "\n\n--TEST-01--\n";
  Bureaucrat b("Mikhail", 46);
  RobotomyRequestForm form("Little puppy");
  b.executeForm(form);
  b.signForm(form);
  b.executeForm(form);
  b.promote();
  b.executeForm(form);
}

// void test2() {
//   std::cout << "\n\n--TEST-02--\n";
//   Bureaucrat b("Max", 90);
//   AForm       f("F4", 120, 120);

//   b.signForm(f);
//   std::cout << f;
// }

