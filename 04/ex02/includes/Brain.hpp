/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:12:56 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/15 17:53:53 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <string>

#define BRAIN_CAPACITY 100

class Brain {
 public:
  Brain();
  Brain(const Brain& other);
  Brain& operator=(const Brain& other);

  ~Brain();

  bool AddIdea(const std::string& idea);
  void PrintIdeas();

 private:
  std::string ideas_[BRAIN_CAPACITY];
  int         index_;
};

#endif