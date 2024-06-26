/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 23:57:00 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/26 10:20:10 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_HPP_
#define LINKED_LIST_HPP_

#include "Amateria.hpp"

template <typename T>
class LinkedList {
 public:
  LinkedList() = delete;
  LinkedList(const T* value);
  LinkedList(const LinkedList& other)            = delete;
  LinkedList& operator=(const LinkedList& other) = delete;

  virtual ~LinkedList();

  void AddBack(const T* value);
  void Clear();

 private:
  const T*          value_;
  LinkedList* next_;
};

#endif