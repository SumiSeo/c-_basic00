#include "Phonebook.hpp"

class PhoneBook
{
  public:
	std::list<Contact> ContactLists;
	int index;

	std::string NewContact()
	{
		Contact Contact;
		index++;
		Contact.index = index;
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
		ContactLists.push_back(Contact);

		return ("The new contact is added to your phonebook successfully ! ");
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
	void FormatContact(std::string FirstName, std::string LastName,
		std::string Nickname, int index)
	{
		std::cout << std::right << std::setw(10) << FirstName << "|" << std::right << std::setw(10) << LastName << "|" << std::right << std::setw(10) << Nickname << "|" << std::right << std::setw(10) << "|" << index << std::endl;
	}

	std::string SearchContact()
	{
		int i;

		std::cout << "Search your contact's information... :";
		std::cin >> i;

		for (std::list<Contact>::iterator it = ContactLists.begin(); it != ContactLists.end(); it++)
		{
			if (i == it->index)
				FormatContact(FormatStr(it->FirstName), FormatStr(it->LastName),
					FormatStr(it->Nickname), it->index);
		}

		return ("Thank you !");
	}

	void exit()
	{
	}
};

int	main(int argc, char **argv)
{
	(void)argv;
	std::string Input;
	std::string ADD;
	std::string SEARCH;
	std::string EXIT;
	PhoneBook PhoneBook;
	ADD = "ADD";
	SEARCH = "SEARCH";
	EXIT = "EXIT";

	if (argc > 1)
		return (0);

	while (42)
	{
		std::cout << "Waiting you command ... : ";
		std::cin >> Input;

		if (Input.compare(ADD) == 0)
			std::cout << PhoneBook.NewContact() << std::endl;
		else if (Input.compare(SEARCH) == 0)
			std::cout << PhoneBook.SearchContact() << std::endl;
		else if (Input.compare(ADD) == 0)
			std::cout << PhoneBook.NewContact() << std::endl;
		else
			std::cerr << "Please write another command" << std::endl;
	}
}