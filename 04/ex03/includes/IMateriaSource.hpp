/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:06:26 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/16 18:08:33 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_HPP_
#define IMATERIA_SOURCE_HPP_

#include <string>
#include "Amateria.hpp"

class IMateriaSource {
 public:
  virtual ~IMateriaSource() {}
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif