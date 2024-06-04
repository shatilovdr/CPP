/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Substitute.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:54:41 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/04 22:25:27 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Substitute.hpp"

Substitute::Substitute(char* file, char* s1, char* s2)
	:	_in_file(file),
		_out_file(file),
		_original(s1),
		_original_length(_original.length()),
		_replacement(s2)
{
	_out_file.append(".replace");
};

Substitute::~Substitute(){};

int	Substitute::ReadWriteFile(void)
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		line;

	input.open(_in_file);
	if (input.is_open() == false)
	{
		std::cerr << "Can't open input file: \"" << _in_file << "\"\n";
		return 1;
	}
	output.open(_out_file);
	if (output.is_open() == false)
	{
		input.close();
		std::cerr << "Can't open output file: " << _out_file << '\n';
		return 1;
	}
	while (std::getline(input, line))
		output << ReplaceLine(line) << '\n';
	input.close();
	output.close();
	return 0;
}

std::string	Substitute::ReplaceLine(const std::string& line)
{
	std::string	new_line;
	std::string::size_type	curr_start = 0;
	std::string::size_type	curr_end = 0;

	if (_original == "")
		return line;
	while ((curr_end = line.find(_original, curr_start)) != std::string::npos)
	{
		new_line.append(line, curr_start, curr_end - curr_start);
		new_line.append(_replacement);
		curr_start = curr_end + _original_length;
	}
	new_line.append(line, curr_start);
	return new_line;
}