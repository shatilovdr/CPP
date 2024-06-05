/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:31:27 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/03 00:38:30 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};

Contact::Contact(const std::string& fn,
				const std::string& ln,
				const std::string& nn,
				const std::string& pn,
				const std::string& ds)
	:	_first_name(fn),
		_last_name(ln),
		_nick_name(nn),
		_phone_number(pn),
		_dark_secret(ds) {};

void	Contact::PreviewContact(int i)
{
	std::string curr;
	MemberFunction	getters[3] = {
		&Contact::get_fn,
		&Contact::get_ln,
		&Contact::get_nn,
	};
	std::cout << "|";
	std::cout << std::setw(10) << std::right << i;
	for (MemberFunction getter : getters)
	{
		std::cout << "|";
		std::cout << std::setw(10) << std::right;
		curr = (this->*getter)();
		if (curr.length() >= 10)
		{
			curr.resize(10);
			curr[9] = '.';
		}
		std::cout << curr;
	}
	std::cout << "|\n";
}

void	Contact::PrintContact(void)
{
	std::cout << "First Name: " << _first_name << '\n';
	std::cout << "Last Name: " << _last_name << '\n';
	std::cout << "Nickname: " << _nick_name << '\n';
	std::cout << "Phone Number: " << _phone_number << '\n';
	std::cout << "Dark Secret: " << _dark_secret << '\n';
}

std::string	Contact::get_fn(void)
{
	return (_first_name);
}

std::string	Contact::get_ln(void)
{
	return (_last_name);
}

std::string	Contact::get_nn(void)
{
	return (_nick_name);
}

std::string	Contact::get_pn(void)
{
	return (_phone_number);
}

std::string	Contact::get_ds(void)
{
	return (_dark_secret);
}
