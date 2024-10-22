#pragma once
#ifndef __PHONEBOOK__H
# define __PHONEBOOK__H

# include "Contact.hpp"
# include "colors.hpp"
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
			ContactLists[i].GetIndex();
		}
	}

	std::string NewContact()
	{
		Contact Contact;
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkSecret;

		std::cout << "Write new contact's first name." << std::endl;
		std::cin >> FirstName;
		std::cout << "Write new contact's last name." << std::endl;
		std::cin >> LastName;
		std::cout << "Write new contact's nickname." << std::endl;
		std::cin >> Nickname;
		std::cout << "Write new contact's phone number." << std::endl;
		std::cin >> PhoneNumber;
		std::cout << "Write new contact's darkest secret." << std::endl;
		std::cin >> DarkSecret;
		index++;
		Contact.SetIndex(index);
		Contact.SetFirstName(FirstName);
		Contact.SetLastName(LastName);
		Contact.SetNickname(Nickname);
		Contact.SetDarkSecret(DarkSecret);
		Contact.SetPhoneNumber(PhoneNumber);

		int len = GetLength(ContactLists);
		if (len > 8)
		{
			std::cout << "Length exceedeed : " << index << std::endl;
			int min = FindMinIndex();
			ReplaceContact(min, Contact.GetFirstName(), Contact.GetLastName(),
				Contact.GetNickname(), Contact.GetPhoneNumber(),
				Contact.GetDarkSecret());
		}
		else
			ContactLists[index] = Contact;

		return ("The new contact is added to your phonebook successfully ! ");
	}

	void DisplayContactInfos();
	void DisplayContact(int i_origin);
	void SearchContact();
	void ReplaceContact(int min, std::string FirstName, std::string LastName,
		std::string Nickname, std::string PhoheNumber, std::string DarkSecret);

	int FindMinIndex();
	std::string DeleteContact();
};

#endif // __PHONEBOOK_H__