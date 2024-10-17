#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <istream>
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

std::string FormatStr(std::string s);
void	FormatContact(std::string FirstName, std::string LastName,
			std::string Nickname, int index);
void	DisplayContactColumn(void);

#endif // PHONEBOOK_HPP