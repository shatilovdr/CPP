/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:31:27 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/03 00:35:34 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>
# include <iomanip>

class Contact {
public:
	explicit Contact();
	Contact(const std::string& fn,
			const std::string& ln,
			const std::string& nn,
			const std::string& pn,
			const std::string& ds);
	void		PreviewContact(int i);
	void		PrintContact();
	std::string	get_fn();
	std::string	get_ln();
	std::string	get_nn();
	std::string	get_pn();
	std::string	get_ds();

private:
	typedef std::string (Contact::*MemberFunction)(void);
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string	_phone_number;
	std::string	_dark_secret;
};

#endif