#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <list>
# include <ostream>
# include <string>

class Contact
{
  public:
	int index;
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkSecret;
};

#endif // PHONEBOOK_HPP