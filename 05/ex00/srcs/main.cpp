/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:53 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/02 10:58:10 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

void test0();
void test1();
void test2();
void test3();
void test4();
void test5();

int main() {
  test0();
  test1();
  test2();
  test3();
  test4();
  // test5();
}

void test0() {
  std::cout << "--TEST-00--\n";
  try {
    Bureaucrat b("Alex", 0);
  } catch (std::exception& e) {
    std::cout << e.what();
  }
}

void test1() {
  std::cout << "\n\n--TEST-01--\n";
  try {
    Bureaucrat b("Mikhail", 151);
  } catch (std::exception& e) {
    std::cout << e.what();
  }
}

void test2() {
  std::cout << "\n\n--TEST-02--\n";
  try {
    Bureaucrat b("Bob", 3);
    b.promote();
    std::cout << b;
    b.promote();
    std::cout << b;
    b.promote();
    std::cout << b;
  } catch (std::exception& e) {
    std::cout << e.what();
  }
}

void test3() {
  std::cout << "\n\n--TEST-03--\n";
  try {
    Bureaucrat b("Max", 149);
    b.demote();
    std::cout << b;
    b.demote();
    std::cout << b;
  } catch (std::exception& e) {
    std::cout << e.what();
  }
}

void test4() {
  std::cout << "\n\n--TEST-04--\n";
  try {
    const Bureaucrat b("Robert", 149);
    std::cout << b;
  } catch (std::exception& e) {
    std::cout << e.what();
  }
}

void test5() {
  std::cout << "\n\n--TEST-05--\n";
  Bureaucrat b("Sam", 1);
  std::cout << b;
  b.promote();
}
