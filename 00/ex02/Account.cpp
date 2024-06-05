/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:25:12 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/05 15:41:57 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) : 
	_accountIndex(getNbAccounts()),
	_amount(initial_deposit)
{
	std::cout << _accountIndex << '\n';
};

Account::~Account()
{
	std::cout << "DESTRUCTOR\n";
};


int	Account::getNbAccounts(void)
{
	static int nb_accounts = 0;
	return nb_accounts++;
}