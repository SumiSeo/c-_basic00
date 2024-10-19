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
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::displayStatus() const
{
	Account::_displayTimestamp();

	std::cout << " index:" << _accountIndex << ";amount:" << Account::_amount << ";deposits:" << Account::_nbDeposits << ";withdrawls:" << Account::_nbWithdrawals << std::endl;
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
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << Account::_amount << ";deposits:" << deposit << ";amount:" << Account::_amount
		+ deposit << ";nb_deposits:" << 1 << std::endl;
	Account::_totalNbDeposits++;
	Account::_amount += deposit;
	Account::_nbDeposits = 1;
	Account::_totalAmount = _totalAmount + deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (withdrawal < _amount)
	{
		std::cout << " index:" << _accountIndex << ";p_amount:" << Account::_amount << ";withdrawl:" << withdrawal << ";amount:" << Account::_amount
			- withdrawal << ";nb_withdrawls:" << 1 << std::endl;
		Account::_totalNbWithdrawals++;
		Account::_nbWithdrawals++;
		Account::_amount = _amount - withdrawal;
		Account::_totalAmount = _totalAmount - withdrawal;
	}
	else
	{
		std::cout << " index:" << _accountIndex << ";p_amount:" << Account::_amount << ";withdrawl:refused" << std::endl;
	}
	return (true);
}
