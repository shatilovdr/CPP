/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:30:25 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/13 22:20:21 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <array>
#include <deque>
#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

void test0();
void test1();
void test2();
void test3();

int main(void) {
  test0();
  test1();
  test2();
  test3();
}

void test0() {
  std::cout << "--TEST-00--ARRAYS\n";
  {
    std::array<int, 9>  arr{0, 1, 2, 3, 4, 5, 6, 7, 8};
    int                 num = 999;

    try {
      std::array<int, 9>::iterator res = easyfind(arr, num);
      (void)res;
    } catch (std::runtime_error& e) {
      std::cout << e.what() << '\n';
    }
  }
  {
    std::array<int, 9>  arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int                 num = 5;

    std::array<int, 9>::iterator res = easyfind(arr, num);
    std::cout << "Initial value:\t\t" << *res << '\n';
    arr[5] = 123;
    std::cout << "Updated value:\t\t" << *res << '\n';
  }
  {
    const std::array<int, 9>  arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int                       num = 5;
    const int*                ptr = &arr[5];

    std::array<int, 9>::const_iterator res = easyfind(arr, num);
    std::cout << "Function result:\t" << &(*res) << '\n';
    std::cout << "Address of element:\t" << ptr << '\n';
  }
}

void test1() {
  std::cout << "\n\n---TEST-01--VECTORS\n";
  {
    std::vector<int>  vec = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int               num = 999;

    try {
      std::vector<int>::iterator res = easyfind(vec, num);
      (void)res;
    } catch (std::runtime_error& e) {
      std::cout << e.what() << '\n';
    }
  }
  {
    std::vector<int>  vec = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int               num = 5;

    std::vector<int>::iterator res = easyfind(vec, num);
    std::cout << "Initial value:\t\t" << *res << '\n';
    vec[5] = 123;
    std::cout << "Updated value:\t\t" << *res << '\n';
  }
  {
    const std::vector<int>  vec = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int                     num = 5;
    const int*              ptr = &vec[5];

    std::vector<int>::const_iterator res = easyfind(vec, num);
    std::cout << "Function result:\t" << &(*res) << '\n';
    std::cout << "Address of element:\t" << ptr << '\n';
  }
}

void test2() {
  std::cout << "\n\n---TEST-02--DEQUE\n";
  {
    std::deque<int>  deq = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int              num = 999;

    try {
      std::deque<int>::iterator res = easyfind(deq, num);
      (void)res;
    } catch (std::runtime_error& e) {
      std::cout << e.what() << '\n';
    }
  }
  {
    std::deque<int>  deq = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int              num = 5;

    std::deque<int>::iterator res = easyfind(deq, num);
    std::cout << "Initial value:\t\t" << *res << '\n';
    deq[5] = 123;
    std::cout << "Updated value:\t\t" << *res << '\n';
  }
  {
    const std::deque<int>  deq = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int                    num = 5;
    const int*             ptr = &deq[5];

    std::deque<int>::const_iterator res = easyfind(deq, num);
    std::cout << "Function result:\t" << &(*res) << '\n';
    std::cout << "Address of element:\t" << ptr << '\n';
  }
}

void test3() {
  std::cout << "\n\n---TEST-03--LIST\n";
  {
    std::list<int>  list = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int             num  = 999;

    try {
      std::list<int>::iterator res = easyfind(list, num);
      (void)res;
    } catch (std::runtime_error& e) {
      std::cout << e.what() << '\n';
    }
  }
  {
    std::list<int>  list = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int             num  = 5;

    std::list<int>::iterator res = easyfind(list, num);
    std::cout << "Initial value:\t\t" << *res << '\n';
    for (int& x : list) {
      if (x == 5) {
        x = 123;
        break;
      }
    }
    std::cout << "Updated value:\t\t" << *res << '\n';
  }
  {
    const std::list<int>  list = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int                   num  = 5;
    const int*            ptr;

    for (const int& x : list) {
      if (x == 5) {
        ptr = &x;
        break;
      }
    }
    std::list<int>::const_iterator res = easyfind(list, num);
    std::cout << "Function result:\t" << &(*res) << '\n';
    std::cout << "Address of element:\t" << ptr << '\n';
  }
}