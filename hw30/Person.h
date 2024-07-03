#pragma once
#include "Contact.h"
class Person : public Contact
{
	string name;
	string address;
public:
	Person();
	Person(string name, string address, string phone);

	void setName(string name);
	void setAddress(string address);

	string getName()const;
	string getAddress()const;

	void showInfo()const override;
};

