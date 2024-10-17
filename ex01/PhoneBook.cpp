#include "Phonebook.hpp"

class PhoneBook
{
  public:
	std::list<Contact> ContactLists;
	int index;

	int FindMinIndex()
	{
		//iterate contact lists and find mininum index 
	}

	std::string NewContact()
	{
		Contact Contact;
		int len;
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

		int len = ContactLists.size();
		if (len > 8)
		{
			FindMinIndex();
		}
		ContactLists.push_back(Contact);

		return ("The new contact is added to your phonebook successfully ! ");
	}

	
	

	void DisplayContactInfos()
	{
		for (std::list<Contact>::iterator it = ContactLists.begin(); it != ContactLists.end(); it++)
		{
			FormatContact(FormatStr(it->FirstName), FormatStr(it->LastName),
				FormatStr(it->Nickname), it->index);
		}
	}

	void DisplayContact(int i)
	{
		for (std::list<Contact>::iterator it = ContactLists.begin(); it != ContactLists.end(); it++)
		{
			if (i == it->index)
			{
				std::cout << "First Name : " << it->FirstName << std::endl;
				std::cout << "Last Name : " << it->LastName << std::endl;
				std::cout << "Nickname : " << it->Nickname << std::endl;
				std::cout << "Phone Number : " << it->PhoneNumber << std::endl;
				std::cout << "Dark Secret : " << it->DarkSecret << std::endl;
				std::cout << "Index : " << it->index << std::endl;
				return ;
			}
		}
		std::cout << "Please verify the index..." << std::endl;
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
		ContactLists.erase(ContactLists.begin(), ContactLists.end());
		return ("There are no more contacts left in you Phone book.");
	}
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

	while (42)
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