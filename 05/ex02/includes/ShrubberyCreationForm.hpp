/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:28:36 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/06 16:30:11 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP_
#define SHRUBBERY_CREATION_FORM_HPP_

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
 public:
  ShrubberyCreationForm() = delete;
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(const ShrubberyCreationForm& other) = default;
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other) = delete;

  ~ShrubberyCreationForm() override = default;

  void doExecution() const override;
};

#endif
