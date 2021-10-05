/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:33:06 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/05 13:44:46 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += this->_amount;
	this->_nbAccounts++;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	std::tm *lt = localtime(&t);

	std::cout << '[' << (lt->tm_year + 1900)
			  << std::setw(2) << std::setfill('0') << (lt->tm_mon + 1)
			  << std::setw(2) << std::setfill('0') << lt->tm_mday << '_'
			  << std::setw(2) << std::setfill('0') << lt->tm_hour
			  << std::setw(2) << std::setfill('0') << lt->tm_min
			  << std::setw(2) << std::setfill('0') << lt->tm_sec << "] ";
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";amount:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << (this->_amount + deposit) << ";nb_deposits:" << (this->_nbDeposits) << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if ((this->_amount - withdrawal) < 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << (this->_amount - withdrawal) << ";nb_withdrawals:" << (this->_nbWithdrawals + 1) << std::endl;

	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	return true;
}

int Account::checkAmount(void) const
{
	return this->_amount > 0;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::Account(void)
{
	return;
}