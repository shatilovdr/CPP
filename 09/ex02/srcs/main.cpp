/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:52:58 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/22 17:25:24 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>
#include <string>
#include <vector>
#include "PmergeMe.hpp"

bool hasDuplicates(std::vector<int>& vec);

int main(int argc, char* argv[]) {
  if (argc == 1) {
    std::cerr << "Error: Not enough arguments\n";
    return 1;
  }
  ++argv;
  --argc;
  std::vector<int> array(argc);
  for (int i = 0; i < argc; ++i) {
    try {
      array[i] = std::stoi(argv[i]);
      if (array[i] < 0) {
        std::cerr << "Error: Negative number detected. (" << argv[i] << ")\n";
        return 1;
      }
    } catch (std::invalid_argument& e) {
      std::cerr << "Error: No conversion could be performed. (" << argv[i] << ")\n";
      return 1;
    } catch (std::out_of_range& e) {
      std::cerr << "Error: The number is out of range. (" << argv[i] << ")\n";
      return 1;
    }
  }
  if (hasDuplicates(array)) {
    std::cerr << "Error: The array has duplicates.\n";
    return 1;
  }
  PmergeMe sort(array);
  return 0;
}


bool hasDuplicates(std::vector<int>& vec) {
  std::set<int> uniqueElements(vec.begin(), vec.end());
  return uniqueElements.size() != vec.size();
}