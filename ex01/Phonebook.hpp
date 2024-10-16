#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <list>
# include <string>

class Contact
{
  public:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	int PhoneNumber;
	std::string DarkSecret;

	void Add()
	{
		std::string FirstName;
		std::cout << "Write new contact's first name." << std::endl;
		std::cin >> FirstName;
		std::cout << "Write new contact's last name." << std::endl;
		std::cin >> FirstName;
		std::cout << "Write new contact's nickname." << std::endl;
		std::cin >> FirstName;
		std::cout << "Write new contact's phone number." << std::endl;
		std::cin >> FirstName;
		std::cout << "Write new contact's darkest secret." << std::endl;
		std::cin >> FirstName;
	}
};

#endif // PHONEBOOK_HPP