/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:53 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/08 22:42:30 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

Base* generate(void);
void  identify(Base* p);
void  identify(Base& p);

int main() {
  Base* base_ptr;
  try {
    base_ptr = generate();
  } catch (std::bad_alloc& e) {
    e.what();
    return 1;
  }
  identify(base_ptr);
  identify(*base_ptr);
  delete base_ptr;
}

Base* generate(void) {
  std::srand(std::time(nullptr));
  int value = std::rand() % 3;
  switch (value) {
    case 0: {
      return new A;
    }
    case 1: {
      return new B;
    }
    case 2: {
      return new C;
    }
    default: {
      return nullptr;
    }
  }
}

void identify(Base* p) {
  A* a = dynamic_cast<A*>(p);
  if (a != nullptr) {
    std::cout << "A\n";
    return;
  }
  B* b = dynamic_cast<B*>(p);
  if (b != nullptr) {
    std::cout << "B\n";
    return;
  }
  C* c = dynamic_cast<C*>(p);
  if (c != nullptr) {
    std::cout << "C\n";
    return;
  }
}

void identify(Base& p) {
  try {
    A& a = dynamic_cast<A&>(p);
    (void)a;
    std::cout << "A\n";
  } catch (std::bad_cast& e) {
  }
  try {
    B& b = dynamic_cast<B&>(p);
    (void)b;
    std::cout << "B\n";
  } catch (std::bad_cast& e) {
  }
  try {
    C& c = dynamic_cast<C&>(p);
    (void)c;
    std::cout << "C\n";
  } catch (std::bad_cast& e) {
  }
}