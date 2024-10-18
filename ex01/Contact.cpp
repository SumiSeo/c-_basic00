#include "Phonebook.hpp"

std::string FormatStr(std::string s)
{
	if (s.length() > 10)
	{
		std::string SplitStr = s.substr(0, 10);
		SplitStr[9] = '.';
		return (SplitStr);
	}
	else
		return (s);
}

void	FormatContact(int index, std::string LastName, std::string Nickname,
		std::string FirstName)
{
	std::cout << std::right << std::setw(10) << index << "|" << std::right << std::setw(10) << LastName << "|" << std::right << std::setw(10) << Nickname << "|" << std::right << std::setw(10) << FirstName << "|" << std::endl;
}

void	DisplayContactColumn(void)
{
	std::cout << std::right << std::setw(10) << "Index"
				<< "|" << std::right << std::setw(10) << "FirstName"
				<< "|" << std::right << std::setw(10) << "LastName"
				<< "|" << std::right << std::setw(10) << "Nickname"
				<< "|" << std::endl;
}

int	GetLength(Contact Lists[8])
{
	int	i;

	i = 1;
	while (i < 9 && Lists[i].index != 0)
	{
		i++;
	}
	return (i);
}
