#include "Phonebook.hpp"

// array of contact

// maxiumum : 8 contacts

// dynamic allocation is forbidden

// ADD / SEARCH / EXIT

class PhoneBook
{
  public:
	std::list<std::string> ContactLists[8];
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

		return ("The new contact is added to your phonebook successfully ! ");
	}
	void SearchContact()
	{
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

	std::cout << "Waiting you command ... : ";
	std::cin >> Input;

	if (Input.compare(ADD) == 0)
		std::cout << PhoneBook.NewContact() << std::endl;
	else if (Input.compare(SEARCH) == 0)
		std::cout << PhoneBook.NewContact() << std::endl;
	else if (Input.compare(ADD) == 0)
		std::cout << PhoneBook.NewContact() << std::endl;
	else
		return (0);
}