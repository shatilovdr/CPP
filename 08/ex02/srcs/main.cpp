/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:38:34 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/14 11:35:55 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <stack>
#include "MutantStack.hpp"

void  test0();
void  test1();
void  test2();

int main() {
  test0();
  test1();
  test2();
}

void  test0() {
  std::cout << "--TEST-00--MutatntStack\n";
  MutantStack<int> mstack;

  mstack.push(5);
  mstack.push(17);

  std::cout << "Current top: " << mstack.top() << std::endl;

  mstack.pop();

  std::cout << "Current size: " << mstack.size() << std::endl;

  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);

  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();

  ++it;
  --it;

  std::cout << "Elements in container: " << std::endl;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);
}

void  test1() {
  std::cout << "\n\n--TEST-01--List\n";
  std::list<int> list;

  list.push_back(5);
  list.push_back(17);

  std::cout << "Current top: " << list.back() << std::endl;

  list.pop_back();

  std::cout << "Current size: " << list.size() << std::endl;

  list.push_back(3);
  list.push_back(5);
  list.push_back(737);
  list.push_back(0);

  std::list<int>::iterator it = list.begin();
  std::list<int>::iterator ite = list.end();

  ++it;
  --it;

  std::cout << "Elements in container: " << std::endl;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::list<int> l(list);
}

void  test2() {
  std::cout << "\n\n--TEST-02--MutantStack with list as a container\n";
  MutantStack<int, std::list<int>> mstack;

  mstack.push(5);
  mstack.push(17);

  std::cout << "Current top: " << mstack.top() << std::endl;

  mstack.pop();

  std::cout << "Current size: " << mstack.size() << std::endl;

  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);

  MutantStack<int, std::list<int>>::iterator it = mstack.begin();
  MutantStack<int, std::list<int>>::iterator ite = mstack.end();

  ++it;
  --it;

  std::cout << "Elements in container: " << std::endl;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int, std::list<int>> s(mstack);
}
