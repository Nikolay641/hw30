#pragma once
#include <iostream>
#include <string>
using namespace std;

class Contact
{
	string phone;
public:
	Contact();
	Contact(string phone);

	void setPhone(string phone);
	string getPhone()const;

	virtual void showInfo()const;
};

