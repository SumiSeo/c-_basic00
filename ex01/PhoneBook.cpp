#include "Phonebook.hpp"

class PhoneBook
{
  public:
	std::list<Contact> ContactLists;
	int index;

	std::string NewContact()
	{
		Contact Contact;

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
		index++;
		ContactLists.push_back(Contact);

		return ("The new contact is added to your phonebook successfully ! ");
	}
	std::string SearchContact()
	{
		int i;

		std::cout << "Search your contact's information... :";
		std::cin >> i;

		for (std::list<Contact>::iterator it = ContactLists.begin(); it != ContactLists.end(); it++)
		{
			std::cout << it->index << std::endl;
			std::cout << "user input i" << i << std::endl;
			if (i == it->index)
				std::cout << it->FirstName << std::endl;
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

	ADD = "ADD";
	SEARCH = "SEARCH";
	EXIT = "EXIT";

	if (argc > 1)
		return (0);

	PhoneBook PhoneBook;

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
			std::cout << "Please write another command" << std::endl;
	}
}