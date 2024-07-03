#pragma once
#include "Contact.h"
#include "Date.h"

class Friend : public Contact
{
	string name;
	Date birthday;
public:
	Friend();
	Friend(string name, Date birthday, string phone);

	void setName(string name);
	void setBirthday(Date birthday);

	string getName()const;
	Date getBirthday()const;

	void showInfo()const override;
};

