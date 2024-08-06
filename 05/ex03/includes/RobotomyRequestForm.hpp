/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:28:36 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/06 16:32:50 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP_
#define ROBOTOMY_REQUEST_FORM_HPP_

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
 public:
  RobotomyRequestForm() = delete;
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm& other)            = default;
  RobotomyRequestForm& operator=(const RobotomyRequestForm& other) = delete;

  ~RobotomyRequestForm() override = default;

  void doExecution() const override;
};

#endif
