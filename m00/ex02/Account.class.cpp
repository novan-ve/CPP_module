/* ************************************************************************** */
/*	                                                    */
/*                                                        ::::::::            */
/*   Account.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/27 12:41:51 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/27 12:58:24 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}


Account::Account( int initial_deposit ) {

    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    this->_amount = initial_deposit;
    Account::_totalAmount += this->_amount;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ';';
    std::cout << "amount:" << this->_amount << ';';
    std::cout << "created" << std::endl;
}

Account::~Account( void ) {

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "closed" << std::endl;
}

void	Account::displayAccountsInfos( void ) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ';';
	std::cout << "total:" << Account::_totalAmount << ';';
	std::cout << "deposits:" << Account::_totalNbDeposits << ';';
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {

	this->_nbDeposits += 1;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "deposit:" << deposit << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	std::cout << "withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal << ';';
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_totalNbWithdrawals++;
	return true;
}

int		Account::checkAmount( void ) const {

	return (_amount);
}

void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "deposits:" << this->_nbDeposits << ';';
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {

	std::cout << "[19920104_091532] ";
//	time_t		t(std::time( 0 ));
//	struct tm	*now(localtime( &t ));
//
//	std::cout << '[' << 1900 + now->tm_year;
//	if (now->tm_mon + 1 < 10)
//		std::cout << '0';
//	std::cout << now->tm_mon + 1;
//	if (now->tm_mday < 10)
//		std::cout << '0';
//	std::cout << now->tm_mday << '_';
//	if (now->tm_hour < 10)
//		std::cout << '0';
//	std::cout << now->tm_hour;
//	if (now->tm_min < 10)
//		std::cout << '0';
//	std::cout << now->tm_min;
//	if (now->tm_sec + 1 < 10)
//		std::cout << '0';
//	std::cout << now->tm_sec + 1 << ']' << ' ';
}
