/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Substitute.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:52:50 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/04 22:06:39 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBSTITUTE_HPP_
# define SUBSTITUTE_HPP_
# include <iostream>
# include <fstream>

class Substitute {
	typedef std::string::size_type str_size;
public:
	Substitute(char* file, char* s1, char* s2);
	~Substitute();
	int			ReadWriteFile(void);
	std::string	ReplaceLine(const std::string& line);
private:
	std::string	_in_file;
	std::string	_out_file;
	std::string	_original;
	str_size	_original_length;
	std::string	_replacement;
};


#endif