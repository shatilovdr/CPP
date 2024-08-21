/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:52:58 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/21 14:43:03 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Error.\n";
    return 1;
  }
  RPN rpn(argv[1]);
  rpn.CalculateExpression();
}
