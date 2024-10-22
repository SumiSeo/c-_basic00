#include "Phonebook.hpp"

std::string Contact::GetFirstName()
{
	return (this->FirstName);
}
std::string Contact::GetLastName()
{
	return (this->LastName);
}
std::string Contact::GetNickname()
{
	return (this->Nickname);
}

std::string Contact::GetPhoneNumber()
{
	return (this->PhoneNumber);
}

std::string Contact::GetDarkSecret()
{
	return (this->DarkSecret);
}
int Contact::GetIndex(void)
{
	return (this->index);
}
void Contact::SetFirstName(std::string FirstName)
{
	(this->FirstName = FirstName);
}

void Contact::SetLastName(std::string LastName)
{
	(this->LastName = LastName);
}
void Contact::SetNickname(std::string Nickname)
{
	(this->Nickname = Nickname);
}
void Contact::SetPhoneNumber(std::string PhoneNumber)
{
	(this->PhoneNumber = PhoneNumber);
}
void Contact::SetDarkSecret(std::string DarkSecret)
{
	(this->DarkSecret = DarkSecret);
}

void Contact::SetIndex(int i)
{
	(this->index = i);
}
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

int	GetLength(Contact *Lists)
{
	int	i;

	i = 1;
	while (i <= 8 && Lists[i].GetIndex() != 0 && Lists[i].GetFirstName() != "")
	{
		i++;
	}
	return (i);
}
