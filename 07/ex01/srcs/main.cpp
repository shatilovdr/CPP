/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:03:03 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/14 17:08:06 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Iter.hpp"

template <typename T>
void f(const T& t) {
  std::cout << t << " ";
}

struct A {
 public:
  A(float value) : value_(value) {}
  A(const A& other)            = default;
  A& operator=(const A& other) = delete;

  ~A() = default;

  const float& getValue() const { return value_; }

 private:
  float value_;
};

std::ostream& operator<<(std::ostream& out, const A& obj) {
  out << std::fixed << std::setprecision(1) << obj.getValue() << "f ";
  return out;
}

int main() {
  int               int_arr[] = {0, 1, 2, 3, 4};
  const int         c_int_arr[] = {0, 1, 2, 3, 4};
  double            double_arr[] = {100.0, 99.0, 98.0, 97.0, 96.0};
  const double      c_double_arr[] = {100.0, 99.0, 98.0, 97.0, 96.0};
  std::string       string_arr[] = {"a", "b", "c", "d", "e"};
  const std::string c_string_arr[] = {"z", "y", "x", "w", "v"};
  A                 A_arr[] = {9.1764f, 29.0671f, 7.6639f, 32.6581f, 27.6086f};
  const A           c_A_arr[] = {13.5916f, 25.6150f, 33.2119f, 44.6757f, 39.7101f};

  iter(int_arr, 5, f);
  std::cout << '\n';
  iter(c_int_arr, 5, f);
  std::cout << '\n';

  iter(double_arr, 5, f);
  std::cout << '\n';
  iter(c_double_arr, 5, f);
  std::cout << '\n';

  iter(string_arr, 5, f);
  std::cout << '\n';
  iter(c_string_arr, 5, f);
  std::cout << '\n';

  iter(A_arr, 5, f);
  std::cout << '\n';
  iter(c_A_arr, 5, f);
  std::cout << '\n';
}
