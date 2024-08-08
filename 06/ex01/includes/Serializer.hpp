/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 09:50:58 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/08 10:34:10 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP_
#define SERIALIZER_HPP_

#include <iostream>
#include <string>

class Serializer {
 private:
  Serializer()                                   = default;
  Serializer(const Serializer& other)            = default;
  Serializer& operator=(const Serializer& other) = default;

  ~Serializer() = default;
};

#endif