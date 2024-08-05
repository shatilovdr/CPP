/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:06:07 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/05 16:38:43 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "../includes/ShrubberyCreationForm.hpp"

std::string& getTrees();

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137, target.append("_shrubbery")) {}


void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
  verifyExecutionConditions(executor);
  std::ofstream	out(getTarget());
  out << getTrees();
  out.close();;
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
