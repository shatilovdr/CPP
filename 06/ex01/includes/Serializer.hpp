/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 09:50:58 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/08 22:40:48 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP_
#define SERIALIZER_HPP_

#include <Data.hpp>
#include <cstdint>

class Serializer {
 public:
  static uintptr_t serialize(Data* ptr);
  static Data*     deserialize(uintptr_t raw);

 private:
  Serializer()                                   = default;
  Serializer(const Serializer& other)            = default;
  Serializer& operator=(const Serializer& other) = default;

  ~Serializer() = default;
};

#endif