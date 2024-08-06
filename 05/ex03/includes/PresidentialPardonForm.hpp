/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:28:36 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/06 16:25:05 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#ifndef PRESIDENTIAL_PARDON_FORM_HPP_
  #define PRESIDENTIAL_PARDON_FORM_HPP_

class PresidentialPardonForm : public AForm {
 public:
  PresidentialPardonForm() = delete;
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(const PresidentialPardonForm& other) = default;
  PresidentialPardonForm& operator=(const PresidentialPardonForm& other) =
      delete;

  ~PresidentialPardonForm() override = default;

  void doExecution() const override;
};

#endif
