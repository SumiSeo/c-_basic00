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
	}
};

#endif // PHONEBOOK_HPP