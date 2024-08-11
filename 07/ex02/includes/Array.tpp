/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:20:15 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/11 17:37:59 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP_
#define ARRAY_TPP_

template <typename T>
Array<T>::Array() : ptr_(nullptr), size_(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : ptr_(n > 0 ? new T[n] : nullptr), size_(n) {}

template <typename T>
Array<T>::Array(const Array& other) : Array<T>(other.size_) {
  for (unsigned int i = 0; i < size_; i++) {
    ptr_[i] = other.ptr_[i];
  }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) & {
  if (&other == this) {
    return *this;
  }
  T* temp = new T[other.size_];
  try {
    for (unsigned int i = 0; i < other.size_; i++) {
      temp[i] = other.ptr_[i];
    }
  } catch (...) {
    std::cout << "failed to apply copy assignment operator\n";
    delete[] temp;
    throw;
  }
  delete[] ptr_;
  ptr_ = temp;
  size_ = other.size_;
  return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] ptr_;
    size_ = 0;
}

template <typename T>
T& Array<T>::operator[](int n) {
  if (n < 0 || static_cast<unsigned int>(n) > size_ - 1 || ptr_ == nullptr) {
    throw std::exception();
  }
  return *(ptr_ + n);
}

template <typename T>
const T& Array<T>::operator[](int n) const {
  if (n < 0 || static_cast<unsigned int>(n) > size_ - 1 || ptr_ == nullptr) {
    throw std::exception();
  }
  return *(ptr_ + n);
}

template <typename T>
unsigned int Array<T>::size() const {
  return size_;
}

#endif