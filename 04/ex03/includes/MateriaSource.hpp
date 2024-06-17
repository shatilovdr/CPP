/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:06:26 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/17 14:18:12 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP_
#define MATERIA_SOURCE_HPP_

#include <string>
#include "IMateriaSource.hpp"

#define SOURCE_CAPACITY 4

class MateriaSource : public IMateriaSource {
 public:
  MateriaSource();
  MateriaSource(const MateriaSource& other);
  MateriaSource& operator=(const MateriaSource& other);
  
  ~MateriaSource() override;

  void      learnMateria(AMateria *materia) override;
  AMateria* createMateria(std::string const & type) override;

 private:
  AMateria* materias_[SOURCE_CAPACITY];
};

#endif