/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:30:25 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/11 17:35:37 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include <vector>
#include "easyfind.hpp"

void test0();
void test1();
void test2();

int main(void) {
  test0();
  test1();
  //add more tests
}



void test0() {
  std::cout << "--TEST-00--ARRAYS\n";
    {
    std::array<int, 9> arr{0, 1, 2, 3, 4, 5, 6, 7, 8};
    int num = 999;

    try {
      std::array<int, 9>::iterator res = easyfind(arr, num);
      (void)res;
    } catch (std::runtime_error& e) {
      std::cout << e.what() << '\n';
    }
  }
  {
    std::array<int, 9> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int num = 5;

    std::array<int, 9>::iterator res = easyfind(arr, num);
    std::cout << "Initial value:\t\t" <<*res << '\n';
    arr[5] = 123; 
    std::cout << "Updated value:\t\t" <<*res << '\n';
  }
  {
    const std::array<int, 9> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int num = 5;
    const int* ptr = &arr[5];

    std::array<int, 9>::const_iterator res = easyfind(arr, num);
    std::cout << "Function result:\t" << &(*res) << '\n';
    std::cout << "Address of element:\t" << ptr << '\n';
  }
}

void test1() {
  std::cout << "\n\n---TEST-01--VECTORS\n";
  {
    std::vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int num = 999;

    try {
      std::vector<int>::iterator res = easyfind(vec, num);
      (void)res;
    } catch (std::runtime_error& e) {
      std::cout << e.what() << '\n';
    }
  }
  {
    std::vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int num = 5;

    std::vector<int>::iterator res = easyfind(vec, num);
    std::cout << "Initial value:\t\t" <<*res << '\n';
    vec[5] = 123; 
    std::cout << "Updated value:\t\t" <<*res << '\n';
  }
  {
    const std::vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int num = 5;
    const int* ptr = &vec[5];

    std::vector<int>::const_iterator res = easyfind(vec, num);
    std::cout << "Function result:\t" << &(*res) << '\n';
    std::cout << "Address of element:\t" << ptr << '\n';
  }
}



void test2() {

}