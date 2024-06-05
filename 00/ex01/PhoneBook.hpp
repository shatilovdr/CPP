/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:55:43 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/05 11:24:00 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook {
public:
	PhoneBook();
	bool		Run(std::string cmd);
	
private:
	Contact	contacts[MAX_CONTACTS];

	bool	AddContact();
	bool	ReadInput(std::string msg, std::string* var);
	bool	SearchContact();

	int	_contacts_num;
	int	_curr_first;
};
#endif