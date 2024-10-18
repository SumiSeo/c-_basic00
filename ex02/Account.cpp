#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	std::cout << "Account created with initial deposit : " << initial_deposit << std::endl;
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
}

void Account::makeDeposit(int deposit)
{
	(void)deposit;
}

void Account::displayStatus() const
{
}

bool Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	return (true);
}
