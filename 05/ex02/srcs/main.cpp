/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:53 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/02 18:59:28 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

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
    AForm f("F1", 200, 3);
  } catch (std::exception& e) {
    std::cout << e.what();
  }
  try {
    AForm f("F2", 45, -4);
  } catch (std::exception& e) {
    std::cout << e.what();
  }
}

void test1() {
  std::cout << "\n\n--TEST-01--\n";
  Bureaucrat b("Mikhail", 130);
  AForm       f("F3", 120, 120);
  try {
    b.signForm(f);
  } catch (std::exception& e) {
    std::cout << e.what();
  }
  std::cout << f;
}

void test2() {
  std::cout << "\n\n--TEST-02--\n";
  Bureaucrat b("Max", 90);
  AForm       f("F4", 120, 120);

  b.signForm(f);
  std::cout << f;
}
