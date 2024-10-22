#pragma once
#ifndef __CONTACT__H
# define __CONTACT__H

# include <iomanip>
# include <iostream>
# include <istream>
# include <ostream>
# include <string>

class Contact
{
  public:
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetNickname();
	std::string GetPhoneNumber();
	std::string GetDarkSecret();
	int GetIndex();
	void SetFirstName(std::string FirstName);
	void SetLastName(std::string LastName);
	void SetNickname(std::string Nickname);
	void SetPhoneNumber(std::string PhoneNumber);
	void SetDarkSecret(std::string DarkSecret);
	void SetIndex(int i);

  private:
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
int		GetLength(Contact *Lists);

#endif // __CONTACT_H__