/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:55:43 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/05 11:23:23 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_contacts_num = 0;
	_curr_first = 0;
}

bool	PhoneBook::Run(std::string cmd)
{
	if (cmd == "ADD")
		return AddContact();
	if (cmd == "SEARCH")
		return SearchContact();
	if (cmd == "EXIT")
		return false;
	std::cout << "Unknown command. Try again."<< '\n';
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
	int	pos;
	if (_contacts_num < MAX_CONTACTS)
		pos = _contacts_num++;
	else
	{
		pos = _curr_first;
		_curr_first = (_curr_first + 1) % MAX_CONTACTS;
	}
	contacts[pos] = Contact(first_name, last_name, nick_name, phone_number, dark_secret);
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

bool	PhoneBook::SearchContact()
{
	if (_contacts_num == 0)
	{
		std::cout << "Phonebook is empty.\n";
		return true;
	}
	std::string splitter = "+----------+----------+----------+----------+\n";
	std::cout << splitter;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME| NICK NAME|\n";
	for(int i = 0; i < _contacts_num; i++)
	{
		std::cout << splitter;
		int	pos = (_curr_first + i) % MAX_CONTACTS;
		contacts[pos].PreviewContact(i + 1);
	}
	std::cout << splitter << '\n';
	int	print_num;
	while (true)
	{
		std::cout << "Input contact index: ";
		std::cin >> print_num;
		if (std::cin.eof())
			return false;
		else if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(LONG_MAX, '\n');
			continue;
		}
		else if (print_num > _contacts_num || print_num < 1)
			continue;
		else
			break;
	}
	contacts[(_curr_first + print_num - 1) % MAX_CONTACTS].PrintContact();
	std::cin.ignore(LONG_MAX, '\n');
	return true;
}
