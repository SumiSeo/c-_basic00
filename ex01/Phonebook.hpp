#pragma once
#ifndef __PHONEBOOK__H
# define __PHONEBOOK__H

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <istream>
# include <ostream>
# include <string>

std::string FormatStr(std::string s);
void	FormatContact(int index, std::string LastName, std::string Nickname,
			std::string FirstName);
void	DisplayContactColumn(void);
int		GetLength(Contact *Lists);

#endif // __PHONEBOOK_H__