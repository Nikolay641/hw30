#include "Person.h"

Person::Person()
{
    name = "Empty";
    address = "Empty";
}

Person::Person(string name, string address, string phone) : Contact(phone)
{
    this->name = name;
    this->address = address;
}

void Person::setName(string name){ this->name = name;}

void Person::setAddress(string address){ this->address = address; }

string Person::getName() const{ return name; }

string Person::getAddress() const{ return address; }

void Person::showInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    Contact::showInfo();
}
