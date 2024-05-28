/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:31:27 by dshatilo          #+#    #+#             */
/*   Updated: 2024/05/28 17:53:19 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>

class Contact {
public:
	explicit Contact();
	Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
	std::string	get_fn();
	std::string	get_ln();
	std::string	get_nn();
	std::string	get_pn();	
	std::string	get_ds();

private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string	_phone_number;
	std::string	_dark_secret;
};

#endif