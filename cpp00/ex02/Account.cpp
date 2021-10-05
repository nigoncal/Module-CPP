/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:33:06 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/05 10:34:23 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
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

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal < 0)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}