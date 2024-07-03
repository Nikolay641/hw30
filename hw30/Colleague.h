#pragma once
#include "Contact.h"
class Colleague : public Contact
{
	string organization;
	string address;
	string fax;
	string contactPerson;
public:
	Colleague();
	Colleague(string organization, string address, string fax, string contactPerson, string phone);

	void setOrganization(string organization);
	void setAddress(string address);
	void setFax(string fax);
	void setContactPerson(string contactPerson);

	string getOrganization()const;
	string getAddress()const;
	string getFax()const;
	string getContactPerson()const;

	void showInfo()const override;
};

