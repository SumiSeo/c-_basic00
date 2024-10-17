#pragma once
#ifndef __PHONEBOOK__H
# define __PHONEBOOK__H

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
void	FormatContact(int index, std::string LastName, std::string Nickname,
			std::string FirstName);
void	DisplayContactColumn(void);

#endif // __PHONEBOOK_H__