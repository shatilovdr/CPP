/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:55:43 by dshatilo          #+#    #+#             */
/*   Updated: 2024/05/28 17:46:01 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	contacts_num = 0;
}

bool	PhoneBook::Run(std::string cmd)
{
	if (cmd == "ADD")
		return AddContact();
	if (cmd == "SEARCH")
		return true;
	if (cmd == "EXIT")
		return false;
	std::cout << "NOPE\n";
	return true;

}
bool	PhoneBook::AddContact(void)
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string dark_secret;
	
	if (ReadInput("Input first name: ", &first_name) == false)
		return false;
	if (ReadInput("Input last name: ", &last_name) == false)
		return false;
	if (ReadInput("Input nick name: ", &nick_name) == false)
		return false;
	if (ReadInput("Input phone number: ", &phone_number) == false)
		return false;
	if (ReadInput("Input dark secret: ", &dark_secret) == false)
		return false;
	contacts[contacts_num % MAX_CONTACTS] = Contact(first_name, last_name, nick_name, phone_number, dark_secret);
	contacts_num++;
	return true;
}

bool	PhoneBook::ReadInput(std::string msg, std::string* var)
{
	while (true)
	{
		std::cout << msg;
		std::getline(std::cin, *var);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (false);
		}
		if (var->length() == 0)
			continue;
		break;
	}
	return true;
}

void	PhoneBook::SearchContact(int num)
{
	for(Contact curr : contacts)
	{
		curr.prin
	}
}