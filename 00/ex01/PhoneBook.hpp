/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:55:43 by dshatilo          #+#    #+#             */
/*   Updated: 2024/05/28 16:28:42 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook {
public:
	explicit	PhoneBook();
	
	bool		Run(std::string cmd);
	
private:
	Contact	contacts[MAX_CONTACTS];

	bool	AddContact();
	bool	ReadInput(std::string msg, std::string* var);
	void	SearchContact(int num);

	size_t	contacts_num;
};
#endif