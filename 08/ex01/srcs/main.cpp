/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:42:35 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/13 22:21:42 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <ctime>
#include <iostream>
#include <limits>
#include <set>
#include "Span.hpp"

void test0();
void test1();
void test2();
void test3();
void test4();
void test5();
void test6();

int main() {
  std::srand(std::time(nullptr));
  test0();
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  return 0;
}

void test0() {
  std::cout << "--TEST-00--Test from subject\n";
  Span sp = Span(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
}

void test1() {
  std::cout << "\n\n--TEST-01--Overflow\n";
  int i;
  try {
    Span sp = Span(100);

    for (i = 0; i < 123; i++) {
      sp.addNumber(rand());
    }
  } catch (std::overflow_error& e) {
    std::cout << "Current index: " << i << ". Error: " << e.what() << '\n';
  }

  try {
    Span sp = Span(345);

    sp.addNumber(5, 999);
  } catch (std::overflow_error& e) {
    std::cout << "Error: " << e.what() << '\n';
  }

  try {
    Span             sp = Span(123);
    std::vector<int> vec(124);

    std::generate(vec.begin(), vec.end(), rand);
    sp.addNumber(vec);
  } catch (std::overflow_error& e) {
    std::cout << "Error: " << e.what() << '\n';
  }
}

void test2() {
  std::cout << "\n\n--TEST-02--Empty span\n";
  Span sp = Span(100);
  try {
    std::cout << sp.shortestSpan() << '\n';
  } catch (std::runtime_error& e) {
    std::cout << "Error: " << e.what() << '\n';
  }
  try {
    std::cout << sp.longestSpan() << '\n';
  } catch (std::runtime_error& e) {
    std::cout << "Error: " << e.what() << '\n';
  }
  sp.addNumber(1);
  try {
    std::cout << sp.shortestSpan() << '\n';
  } catch (std::runtime_error& e) {
    std::cout << "Error: " << e.what() << '\n';
  }
  try {
    std::cout << sp.longestSpan() << '\n';
  } catch (std::runtime_error& e) {
    std::cout << "Error: " << e.what() << '\n';
  }
  sp.addNumber(2);
  std::cout << sp.shortestSpan() << '\n';
  std::cout << sp.longestSpan() << '\n';
}

void test3() {
  std::cout << "\n\n--TEST-03--Limits check\n";
  Span sp = Span(100);

  sp.addNumber(std::numeric_limits<int>::max());
  sp.addNumber(10);
  sp.addNumber(20);
  sp.addNumber(30);
  sp.addNumber(40);
  sp.addNumber(50);
  sp.addNumber(std::numeric_limits<int>::min());
  // sp.addNumber(10);
  std::cout << sp.shortestSpan() << '\n';
  std::cout << sp.longestSpan() << '\n';
}

void test4() {
  std::cout << "\n\n--TEST-04--Shortest span check\n";
  Span             sp = Span(100000);
  std::vector<int> vec(100000);

  int i = 0;
  for (int& x : vec) {
    x = ++i;
  }
  sp.addNumber(vec);
  std::cout << sp.shortestSpan() << '\n';
  std::cout << sp.longestSpan() << '\n';
}

void test5() {
  std::cout << "\n\n--TEST-05--Longest span check\n";
  Span             sp = Span(100000);
  std::vector<int> vec(100000);

  int i = 0;
  for (int& x : vec) {
    x = ++i * 10;
  }
  vec[0]     = 0;
  vec[12345] = 7;
  sp.addNumber(vec);
  std::cout << sp.shortestSpan() << '\n';
  std::cout << sp.longestSpan() << '\n';
}

void test6() {
  std::cout << "\n\n--TEST-06--Random numbers\n";
  Span             sp = Span(1000000);
  std::vector<int> vec(1000000);

  std::generate(vec.begin(), vec.end(), rand);
  sp.addNumber(vec);
  std::cout << sp.shortestSpan() << '\n';
  std::cout << sp.longestSpan() << '\n';
}
