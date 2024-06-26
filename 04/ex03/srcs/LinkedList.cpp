/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:47:34 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/26 11:41:36 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinkedList.hpp"

template void LinkedList<AMateria>::AddBack(const AMateria* value);
template void LinkedList<AMateria>::Clear();
template LinkedList<AMateria>::LinkedList(const AMateria* value);

template <typename T>
LinkedList<T>::LinkedList(const T* value) {
  value_ = value;
  next_  = nullptr;
}

template <typename T>
LinkedList<T>::~LinkedList() {}

template <typename T>
void LinkedList<T>::AddBack(const T* value) {
  if (value == nullptr) return;
  LinkedList<T>* temp = this;
  while (temp->next_) {
    temp = next_;
  }
  temp->next_ = new LinkedList<T>(value);
}

template <typename T>
void LinkedList<T>::Clear() {
  LinkedList<T>* current = this->next_;

  while (current != nullptr) {
    LinkedList<T>* next = current->next_;

    delete current->value_;
    delete current;
    current = next;
  }
  delete this->value_;
  this->next_ = nullptr;
}