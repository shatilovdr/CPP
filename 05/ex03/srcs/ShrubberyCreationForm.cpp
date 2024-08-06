/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:06:07 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/06 16:31:01 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

std::string& getTrees();

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137, target.append("_shrubbery")) {}

void ShrubberyCreationForm::doExecution() const {
  std::ofstream out(getTarget());
  out << getTrees();
  out.close();
  ;
}

std::string& getTrees() {
  static std::string trees = 
  "              * *                           * *                           * *             \n"
  "           *    *  *                     *    *  *                     *    *  *          \n"
  "      *  *    *     *  *            *  *    *     *  *            *  *    *     *  *      \n"
  "     *     *    *  *    *          *     *    *  *    *          *     *    *  *    *     \n"
  " * *   *    *    *    *   *    * *   *    *    *    *   *    * *   *    *    *    *   *   \n"
  " *     *  *    * * .#  *   *   *     *  *    * * .#  *   *   *     *  *    * * .#  *   *  \n"
  " *   *     * #.  .# *   *      *   *     * #.  .# *   *      *   *     * #.  .# *   *     \n"
  "  *     '#.  #: #' * *    *     *     '#.  #: #' * *    *     *     '#.  #: #' * *    *   \n"
  " *   * * '#. ##'       *       *   * * '#. ##'       *       *   * * '#. ##'       *      \n"
  "   *       '###                  *       '###                  *       '###               \n"
  "             '##                           '##                           '##              \n"
  "              ##.                           ##.                           ##.             \n"
  "              .##:                          .##:                          .##:            \n"
  "              :###                          :###                          :###            \n"
  "              ;###                          ;###                          ;###            \n"
  "            ,####.                        ,####.                        ,####.            \n"
  "~~~~~~~~~~~.######.~~~~~~~~~~~~~~~~~~~~~~.######.~~~~~~~~~~~~~~~~~~~~~~.######.~~~~~~~~~~~\n";
  return trees;
}
