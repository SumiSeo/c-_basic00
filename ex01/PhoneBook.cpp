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

int	main(void)
{
	PhoneBook PhoneBook;
	std::cout << " hi" << PhoneBook.Add();
}