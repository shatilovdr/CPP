/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:40:38 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/15 12:00:44 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 10

void  test0();
void  test1();

int  main() {
  test0();
  test1();
}

void  test0() {
  std::cout << "--TEST-00--Basic tests\n";
  Array<int> numbers(MAX_VAL);
  int* mirror = new int[MAX_VAL];
  srand(time(NULL));

  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand();
    numbers[i] = value;
    mirror[i] = value;
  }

  {
    Array<int> tmp = numbers;
    Array<int> test(tmp);
  }

  for (int i = 0; i < MAX_VAL; i++)
  {
    if (mirror[i] != numbers[i]) {
      std::cerr << "didn't save the same value!!" << std::endl;
      return;
    }
  }

  try {
    numbers[-2] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  try  {
    numbers[MAX_VAL] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  for (int i = 0; i < MAX_VAL; i++) {
    numbers[i] = rand();
  }

  delete [] mirror;
}

void  test1() {
  std::cout << "\n\n--TEST-01--Subscript operator tests\n";
  Array<int> numbers(MAX_VAL);
  srand(time(NULL));

  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand();
    numbers[i] = value;
  }
  const Array<int> c_numbers(numbers);

  for (int i = 0; i < MAX_VAL; ++i) {
    std::cout << numbers[i] << '\n';
    numbers[i] = 42;
  }
  std::cout << '\n';
  for (int i = 0; i < MAX_VAL; ++i) {
    std::cout << numbers[i] << '\n';
  }
  std::cout << '\n';
  for (int i = 0; i < MAX_VAL; ++i) {
    std::cout << c_numbers[i] << '\n';
    //c_numbers[i] = 42; // CE
  }
  // std::cout << '\n';
  // std::cout << "Operator result address:\t" << &c_numbers[3] << '\n';
  // std::cout << "Real address:\t\t\t" << c_numbers.ptr_ + 3 << '\n';
}