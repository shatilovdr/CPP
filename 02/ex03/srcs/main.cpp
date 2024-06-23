/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:51:44 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/09 13:27:11 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

void PrintResult(Point a, Point b, Point c, Point p);

int main() {
  {
    std::cout << "/* Test-00: Degenerate Triangle */\n";
    Point a(3.3f, 2.1f);
    Point b(3.5f, 2.1f);
    Point c(3.6f, 2.1f);
    Point p(3.7f, 2.1f);
    PrintResult(a, b, c, p);
  }
  std::cout << '\n';
  {
    std::cout << "/* Test-01: Acute Triangle */\n";
    Point a(1.0f, 1.0f);
    Point b(4.0f, 1.0f);
    Point c(2.5f, 3.0f);
    Point p(2.5f, 2.0f);
    PrintResult(a, b, c, p);
  }
  std::cout << '\n';
  {
    std::cout << "/* Test-02: Obtuse Triangle */\n";
    Point a(1.0f, 1.0f);
    Point b(6.0f, 1.0f);
    Point c(2.0f, 4.0f);
    Point p(3.0f, 2.0f);
    PrintResult(a, b, c, p);
  }
  std::cout << '\n';
  {
    std::cout << "/* Test-03: Right Triangle */\n";
    Point a(1.0f, 1.0f);
    Point b(5.0f, 1.0f);
    Point c(1.0f, 4.0f);
    Point p(3.0f, 2.0f);
    PrintResult(a, b, c, p);
  }
  std::cout << '\n';
  {
    std::cout << "/* Test-04: Point Outside the Triangle */\n";
    Point a(1.0f, 1.0f);
    Point b(5.0f, 1.0f);
    Point c(3.0f, 4.0f);
    Point p(6.0f, 3.0f);
    PrintResult(a, b, c, p);
  }
  std::cout << '\n';
  {
    std::cout << "/* Test-05: Point on the Edge of the Triangle */\n";
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(2.5f, 5.0f);
    Point p(2.5f, 2.5f);
    PrintResult(a, b, c, p);
  }
  std::cout << '\n';
  {
    std::cout << "/* Test-06: Point at a Vertex of the Triangle */\n";
    Point a(1.0f, 1.0f);
    Point b(5.0f, 1.0f);
    Point c(3.0f, 4.0f);
    Point p(1.0f, 1.0f);
    PrintResult(a, b, c, p);
  }
  return 0;
}

void PrintResult(Point a, Point b, Point c, Point p) {
  std::cout << (bsp(a, b, c, p) ? "Point is inside triangle\n"
                                : "Point is outside triangle\n");
}
