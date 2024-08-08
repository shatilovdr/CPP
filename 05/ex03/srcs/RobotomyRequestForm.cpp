/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:06:07 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/08 15:21:05 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45, target) {}

void RobotomyRequestForm::doExecution() const {
  static bool flag = false;
  std::cout << "* DRILLING NOISES *\n";
  if (!flag) {
    std::cout << getTarget() << " has been robotomized successfully.\n";
    flag = true;
  } else {
    std::cout << getTarget() << " has failed to robotomize.\n";
    flag = false;
  }
}
