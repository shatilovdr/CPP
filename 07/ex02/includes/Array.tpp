/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:20:15 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/09 18:43:54 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : ptr_(nullptr) {}

template <typename T>
Array<T>::Array(unsigned int n) try: ptr_(new T[n]), size_(n) {
  
} catch (std::bad_alloc& e) {
  std::cout << "failed to create Array object\n" << e.what() << '\n';
}

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
  if (ptr_ != nullptr) {
    delete[] ptr_;
  }
  try {
    ptr_ = new T[other.size_];
    size_ = other.size_;
    for (unsigned int i = 0; i < size_; i++) {
      ptr_[i] = other.ptr_[i];
    }
  } catch(std::bad_alloc& e) {
      std::cout << "failed to apply copy assignment operator\n" << e.what() << '\n';
      ptr_ = nullptr;
      size_ = 0;
  }
  return *this;
}

template <typename T>
Array<T>::~Array() {
  if (ptr_ != nullptr) {
    delete[] ptr_;
    size_ = 0;
  }
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

