#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <list>

class Contact
{
  public:
	int Index;
	std::string FirstName;
	std::string LastName;
	std::string NickName;
};

#endif // PHONEBOOK_HPP