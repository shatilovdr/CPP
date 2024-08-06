/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:53 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/06 13:53:49 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

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
  try {
    Form form("F1", 200, 3);
  } catch (std::exception& e) {
    std::cout << e.what();
  }
  try {
    Form form("F2", 45, -4);
  } catch (std::exception& e) {
    std::cout << e.what();
  }
}

void test1() {
  std::cout << "\n\n--TEST-01--\n";
  Bureaucrat b("Mikhail", 130);
  Form       form("F3", 120, 120);
  try {
    b.signForm(form);
  } catch (std::exception& e) {
    std::cout << e.what();
  }
  std::cout << form;
}

void test2() {
  std::cout << "\n\n--TEST-02--\n";
  Bureaucrat b("Max", 90);
  Bureaucrat t("Tom", 90);
  Form       form("F4", 120, 120);

  b.signForm(form);
  t.signForm(form);
  std::cout << form;
}
