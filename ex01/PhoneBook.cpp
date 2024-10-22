#include "Phonebook.hpp"

void PhoneBook::ReplaceContact(int min, std::string FirstName,
	std::string LastName, std::string Nickname, std::string PhoneNumber,
	std::string DarkSecret)
{
	for (int i = 1; i < GetLength(ContactLists); i++)
	{
		if (min == ContactLists[i].GetIndex())
		{
			ContactLists[i].SetFirstName(FirstName);
			ContactLists[i].SetLastName(LastName);
			ContactLists[i].SetNickname(Nickname);
			ContactLists[i].SetPhoneNumber(PhoneNumber);
			ContactLists[i].SetDarkSecret(DarkSecret);
			ContactLists[i].SetIndex(i);
		}
	}
}

int PhoneBook::FindMinIndex()
{
	int	min;

	min = ContactLists[0].GetIndex();
	for (int i = 1; i < GetLength(ContactLists); i++)
	{
		if (min > ContactLists[i].GetIndex())
			min = ContactLists[i].GetIndex();
	}
	return (min);
}
void PhoneBook::DisplayContactInfos(void)
{
	int	length;

	length = GetLength(ContactLists);
	for (int i = 1; i < length; i++)
	{
		FormatContact(ContactLists[i].GetIndex(),
			FormatStr(ContactLists[i].GetFirstName()),
			FormatStr(ContactLists[i].GetLastName()),
			FormatStr(ContactLists[i].GetNickname()));
	}
}
std::string PhoneBook::DeleteContact()
{
	for (int i = 1; i < GetLength(ContactLists); i++)
	{
		ContactLists[i].SetIndex(0);
		ContactLists[i].SetFirstName("");
		ContactLists[i].SetLastName("");
		ContactLists[i].SetNickname("");
		ContactLists[i].SetPhoneNumber("");
		ContactLists[i].SetDarkSecret("");
	}
	return ("There are no more contacts left in you Phone book.");
};
void PhoneBook::DisplayContact(int i_origin)
{
	for (int i = 1; i < GetLength(ContactLists); i++)
	{
		if (i_origin == ContactLists[i].GetIndex())
		{
			std::cout << "First Name : " << ContactLists[i].GetFirstName() << std::endl;
			std::cout << "Last Name : " << ContactLists[i].GetLastName() << std::endl;
			std::cout << "Nickname : " << ContactLists[i].GetNickname() << std::endl;
			std::cout << "Phone Number : " << ContactLists[i].GetPhoneNumber() << std::endl;
			std::cout << "Dark Secret : " << ContactLists[i].GetDarkSecret() << std::endl;
			std::cout << "Index : " << ContactLists[i].GetIndex() << std::endl;
			return ;
		}
	}
}
void PhoneBook::SearchContact(void)
{
	int	i;

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
