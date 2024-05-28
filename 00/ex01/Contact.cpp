/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:31:27 by dshatilo          #+#    #+#             */
/*   Updated: 2024/05/27 16:00:43 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
	:	_first_name(fn),
		_last_name(ln),
		_nick_name(nn),
		_phone_number(pn),
		_dark_secret(ds) {};
		
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