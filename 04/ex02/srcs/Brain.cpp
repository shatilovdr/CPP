/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:30:05 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 17:47:26 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() : index_(0) {
  std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain& other) {
  std::cout << "Brain copy constructor called\n";
  *this = other;
}

Brain& Brain::operator=(const Brain& other) {
  std::cout << "Brain copy assignment operator called\n";
  if (&other == this) {
    return *this;
  }
  for (int i = 0; i < other.index_; i++) {
    ideas_[i] = other.ideas_[i];
  }
  index_ = other.index_;
  return *this;
}

Brain::~Brain() {
  std::cout << "Brain destructor called\n";
}

bool Brain::AddIdea(const std::string& idea) {
  if (index_ == BRAIN_CAPACITY) {
    return false;
  }
  ideas_[index_++] = idea;
  return true;
}

void Brain::PrintIdeas() {
  for (int i = 0; i < index_; i++) {
    std::cout << ideas_[i] << '\n';
  }
}