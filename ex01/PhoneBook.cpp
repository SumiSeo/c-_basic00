#include "Phonebook.hpp"

void PhoneBook::ReplaceContact(int min, std::string FirstName,
	std::string LastName, std::string Nickname, std::string PhoheNumber,
	std::string DarkSecret, int index)
{
	for (int i = 1; i < GetLength(ContactLists); i++)
	{
		if (min == ContactLists[i].index)
		{
			ContactLists[i].FirstName = FirstName;
			ContactLists[i].LastName = LastName;
			ContactLists[i].Nickname = Nickname;
			ContactLists[i].PhoneNumber = PhoheNumber;
			ContactLists[i].DarkSecret = DarkSecret;
			ContactLists[i].index = index;
		}
	}
}

int PhoneBook::FindMinIndex()
{
	int	min;

	min = ContactLists[0].index;
	for (int i = 1; i < GetLength(ContactLists); i++)
	{
		if (min > ContactLists[i].index)
			min = ContactLists[i].index;
	}
	return (min);
}
void PhoneBook::DisplayContactInfos(void)
{
	for (int i = 1; i < GetLength(ContactLists); i++)
	{
		FormatContact(ContactLists[i].index,
			FormatStr(ContactLists[i].FirstName),
			FormatStr(ContactLists[i].LastName),
			FormatStr(ContactLists[i].Nickname));
	}
}
std::string PhoneBook::DeleteContact()
{
	
	for (int i = 1; i < GetLength(ContactLists); i++)
	{
		ContactLists[i].index = 0;
		ContactLists[i].FirstName = "";
		ContactLists[i].LastName = "";
		ContactLists[i].Nickname = "";
		ContactLists[i].PhoneNumber = "";
		ContactLists[i].DarkSecret = "";
	}
	return ("There are no more contacts left in you Phone book.");
};
void PhoneBook::SearchContact(void)
{int	i;

	DisplayContactColumn();
	DisplayContactInfos();
	std::cout << std::endl;
	std::cout << "Enter the index of column to display...";
	std::cin >> i;
	if (i == 0)
		std::cout << "Please verify the index..." << std::endl;
	else
		DisplayContact(i);
}

void	PhoneBook::DisplayContact(int i_origin)
{
	for (int i = 1; i < GetLength(ContactLists); i++)
	{
		if (i_origin == ContactLists[i].index)
		{
			std::cout << "First Name : " << ContactLists[i].FirstName << std::endl;
			std::cout << "Last Name : " << ContactLists[i].LastName << std::endl;
			std::cout << "Nickname : " << ContactLists[i].Nickname << std::endl;
			std::cout << "Phone Number : " << ContactLists[i].PhoneNumber << std::endl;
			std::cout << "Dark Secret : " << ContactLists[i].DarkSecret << std::endl;
			std::cout << "Index : " << ContactLists[i].index << std::endl;
			return ;
		}
	}
}