/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:06:07 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/05 16:47:52 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45, target) {}


void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
  verifyExecutionConditions(executor);
  static bool  flag = false;
  std::cout << "* DRILLING NOISES *\n";
  if (!flag) {
    std::cout << getTarget() << " has been robotomized successfully.\n";
    flag = true;
  } else {
    std::cout << getTarget() << " has failed to robotomize.\n";
    flag = true;
  }
}
