/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:32:36 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/24 17:26:54 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp()
{
	time_t	now;
	char	time[20];

	now = std::time(nullptr);
	std::strftime(time, sizeof(time), "%Y%m%d_%H%M%S", localtime(&now));
	std::cout << "[" << time << "]";
};

Account::Account(int initial_deposit){
	//Common status
	_nbAccounts++;
	_totalAmount += initial_deposit;

	//Instance status
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	//Display creation's noti
	_displayTimestamp();
	std::cout << " index:" << _nbAccounts - 1;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
};

Account::~Account()
{
	//Common status
	_totalAmount -= _amount;

	//Display deletion's noti
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
};

int	Account::getNbAccounts()
{
	return (_nbAccounts);
};

int	Account::getTotalAmount()
{
	return (_totalAmount);
};

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
};

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
};

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
};

void	Account::makeDeposit(int deposit)
{
	//Common status
	_totalAmount += deposit;
	_totalNbDeposits++;

	//Instance status
	_amount += deposit;
	_nbDeposits++;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount - deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits << std::endl;
};

bool	Account::makeWithdrawal(int	withdrawal)
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << " index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:refused:" << std::endl;
		return (0);
	}
	//Common status
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	//Instance status
	_amount -= withdrawal;
	_nbWithdrawals++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount + withdrawal;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << _amount;
	std::cout << ";withdrawal:" << _nbWithdrawals << std::endl;
	return (1);
};

int		Account::checkAmount() const
{
	return (_amount);
};

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawal:" << _nbWithdrawals << std::endl;
};