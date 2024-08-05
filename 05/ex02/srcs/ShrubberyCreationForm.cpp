/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:06:07 by dshatilo          #+#    #+#             */
/*   Updated: 2024/08/05 16:13:21 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "../includes/ShrubberyCreationForm.hpp"

std::string& getTree();

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137, target.append("_shrubbery")) {}


void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
  verifyExecutionConditions(executor);
  std::ofstream	out(getTarget());
  out << getTree();
  out.close();;
}

std::string& getTree() {
  static std::string tree = 
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
  return tree;
}
