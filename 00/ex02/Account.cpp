/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:25:12 by dshatilo          #+#    #+#             */
/*   Updated: 2024/06/06 00:58:46 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts++),
	_amount(initial_deposit)
{
	_totalAmount += checkAmount();
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << checkAmount()
			<< ";created\n";
	
};

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << checkAmount()
			<< ";closed\n";
};


int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
			<< ";total:" << getTotalAmount()
			<< ";deposits:" << getNbDeposits()
			<< ";withdrawals:" << getNbWithdrawals()
			<< '\n';
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << checkAmount()
			<< ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << ";amount:" << checkAmount()
			<< ";nb_deposits:" << _nbDeposits
			<< '\n';
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << checkAmount();
	if (checkAmount() - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused\n";
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal
			<< ";amount:" << checkAmount()
			<< ";nb_withdrawals:" << _nbWithdrawals
			<< '\n';
	return true;
}

int	Account::checkAmount(void) const
{
	return _amount;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << checkAmount()
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals
			<< '\n';
}

void	Account::_displayTimestamp(void)
{
	time_t		tt = time(NULL);
	tm*	time = localtime(&tt);
	
	char timestamp[16];
    strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", time);
    std::cout << '[' << timestamp << "] ";
}
