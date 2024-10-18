#include "Phonebook.hpp"

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