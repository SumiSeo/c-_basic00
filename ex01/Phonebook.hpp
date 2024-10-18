#pragma once
#ifndef __PHONEBOOK__H
# define __PHONEBOOK__H

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <istream>
# include <ostream>
# include <string>

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

	void DisplayContactInfos();
	void DisplayContact(int i_origin);
	void SearchContact();
	void ReplaceContact(int min, std::string FirstName, std::string LastName,
		std::string Nickname, std::string PhoheNumber, std::string DarkSecret,
		int index);

	int FindMinIndex();
	std::string DeleteContact();
};

#endif // __PHONEBOOK_H__