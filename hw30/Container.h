#pragma once
#include <vector>
#include <algorithm>
#include "Person.h"
#include "Friend.h"
#include "Contact.h"
#include "Colleague.h"


class Container
{
	vector<Contact*> container;
public:
	void addContact(Contact* contact);
	void removeContact(int index);
	void editContact(int index, Contact* contact);
	Contact* searchContactByPhone(string phone);
	void showInfo()const;
	void showAll()const;
};

