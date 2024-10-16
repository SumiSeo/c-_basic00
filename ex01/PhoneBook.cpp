#include "Phonebook.hpp"

// array of contact

// maxiumum : 8 contacts

// dynamic allocation is forbidden

// ADD / SEARCH / EXIT

class PhoneBook
{
  public:
	std::list<std::string> ContactLists;
	Contact NewContact;

	std::string Add()
	{
		return (NewContact.FirstName = "Sumi");
	}
	void Search()
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
	std::cin >> Input;

	if (Input.compare(ADD) == 0)
		std::cout << "ADD" << PhoneBook.Add() << std::endl;
	else if (Input.compare(SEARCH) == 0)
		std::cout << "SEARCH" << PhoneBook.Add() << std::endl;
	else if (Input.compare(ADD) == 0)
		std::cout << "" << PhoneBook.Add() << std::endl;
	else
		return (0);
}