/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:28:36 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/05 16:36:23 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#ifndef ROBOTOMY_REQUEST_FORM_HPP_
#define ROBOTOMY_REQUEST_FORM_HPP_

class RobotomyRequestForm : public AForm {
public:
  RobotomyRequestForm() = delete;
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm& other)            = default;
  RobotomyRequestForm& operator=(const RobotomyRequestForm& other) = delete;

  ~RobotomyRequestForm() override = default;

  void execute(const Bureaucrat& executor) const override;
};

#endif
