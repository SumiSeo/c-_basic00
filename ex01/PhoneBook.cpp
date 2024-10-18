#include "Phonebook.hpp"

class PhoneBook
{
  public:
	Contact ContactLists[9];

	int index;
	PhoneBook() : index(0)
	{
		for (int i = 1; i < 9; i++)
		{
			ContactLists[i].index = 0;
		}
	}

	int FindMinIndex()
	{
		int min = ContactLists[0].index;
		for (int i = 1; i < GetLength(ContactLists); i++)
		{
			if (min > ContactLists[i].index)
				min = ContactLists[i].index;
		}
		return (min);
	}

	void ReplaceContact(int min, std::string FirstName, std::string LastName,
		std::string Nickname, std::string PhoheNumber, std::string DarkSecret,
		int index)
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
	std::string NewContact()
	{
		Contact Contact;

		std::cout << "Write new contact's first name." << std::endl;
		std::cin >> Contact.FirstName;
		std::cout << "Write new contact's last name." << std::endl;
		std::cin >> Contact.LastName;
		std::cout << "Write new contact's nickname." << std::endl;
		std::cin >> Contact.Nickname;
		std::cout << "Write new contact's phone number." << std::endl;
		std::cin >> Contact.PhoneNumber;
		std::cout << "Write new contact's darkest secret." << std::endl;
		std::cin >> Contact.DarkSecret;
		index++;
		Contact.index = index;

		int len = GetLength(ContactLists);
		std::cout << "length check !" << len << std::endl;
		if (len > 8)
		{
			std::cout << "Length exceedeed : " << index << std::endl;
			int min = FindMinIndex();
			ReplaceContact(min, Contact.FirstName, Contact.LastName,
				Contact.Nickname, Contact.PhoneNumber, Contact.DarkSecret,
				Contact.index);
		}
		else
			ContactLists[index] = Contact;

		return ("The new contact is added to your phonebook successfully ! ");
	}

	void DisplayContactInfos()
	{
		for (int i = 1; i < GetLength(ContactLists); i++)
		{
			FormatContact(ContactLists[i].index,
				FormatStr(ContactLists[i].FirstName),
				FormatStr(ContactLists[i].LastName),
				FormatStr(ContactLists[i].Nickname));
		}
	}

	void DisplayContact(int i_origin)
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

	void SearchContact()
	{
		int i;

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

	std::string DeleteContact()
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
};

int	main(void)
{
	std::string Input;
	std::string ADD;
	std::string SEARCH;
	std::string EXIT;
	PhoneBook PhoneBook;
	ADD = "ADD";
	SEARCH = "SEARCH";
	EXIT = "EXIT";

	while (true)
	{
		std::cout << "Waiting you command ... : ";
		std::cin >> Input;
		if (std::cin.good() == false)
			break ;
		if (Input.compare(ADD) == 0)
			std::cout << PhoneBook.NewContact() << std::endl;
		else if (Input.compare(SEARCH) == 0)
			PhoneBook.SearchContact();
		else if (Input.compare(EXIT) == 0)
			std::cout << PhoneBook.DeleteContact() << std::endl;
		else
			std::cerr << "Please write another command" << std::endl;
	}
}