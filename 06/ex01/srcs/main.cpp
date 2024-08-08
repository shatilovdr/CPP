/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:53 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/08 17:07:28 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main() {
  Data data{123, "string"};
  std::cout << "Initial object address: "<<&data << '\n';
  uintptr_t ptr = Serializer::serialize(&data);
  Data* data_ptr = Serializer::deserialize(ptr);
  std::cout << "Deserialized object address: " << data_ptr << '\n';
  std::cout << "Initial int:" << data.integer << ", string:" << data.string << '\n';
  std::cout << "Deserialized int:" << data.integer << ", string:" << data.string << '\n';
  data_ptr->integer = 0;
  data_ptr->string = "NEW_STRING";
  std::cout << "Initial int:" << data.integer << ", string:" << data.string << '\n';
  std::cout << "Deserialized int:" << data.integer << ", string:" << data.string << '\n';
}
