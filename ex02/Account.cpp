#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts++),
	_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	Account::_totalAmount += initial_deposit;
}

Account::~Account(void)
{
	std::cout << "Account destroyed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}
int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}
void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawls:" << Account::getNbWithdrawals() << std::endl;
}
void Account::_displayTimestamp(void)
{
	time_t	ts;
	char	buf[16];

	time(&ts);
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", localtime(&ts));
	std::cout << "[" << buf << "]";
}

void Account::makeDeposit(int deposit)
{
	// std::cout << "Make deposit called" << std::endl;
	// Account::_nbDeposits = Account::_nbDeposits + deposit;
	// Account::_totalAmount += deposit;
	(void)deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	std::cout << "Make withdrawl called" << std::endl;
	return (true);
}

void Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawls:" << Account::getNbWithdrawals() << std::endl;
}
