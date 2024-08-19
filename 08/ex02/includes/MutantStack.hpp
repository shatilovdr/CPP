/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:39:21 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/19 11:17:34 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP_
#define MUTANT_STACK_HPP_

#include <stack>

template <class T, class Container = std::deque<T>>
class MutantStack : public std::stack<T, Container> {
 public:
  using iterator = typename Container::iterator;
  using const_iterator = typename Container::const_iterator;

  MutantStack()                                      = default;
  MutantStack(const MutantStack& other)              = default;
  using std::stack<T, Container>::stack;
  MutantStack& operator=(const MutantStack& other) & = default;

  ~MutantStack() = default;

  iterator begin() {
    return this->c.begin();
  }

  iterator end() {
    return this->c.end();
  }

  const_iterator begin() const {
    return this->c.begin();
  }

  const_iterator end() const {
    return this->c.end();
  }
};

#endif