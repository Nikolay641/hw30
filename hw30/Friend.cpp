#include "Friend.h"

Friend::Friend()
{
    name = "Empty";
    birthday = Date();
}

Friend::Friend(string name, Date birthday, string phone) : Contact(phone)
{
    this->name = name;
    this->birthday = birthday;
}

void Friend::setName(string name){ this->name = name; }

void Friend::setBirthday(Date birthday){ this->birthday = birthday; }

string Friend::getName() const{ return name; }

Date Friend::getBirthday() const{ return birthday; }

void Friend::showInfo() const
{
    cout << "Name: " << name << endl;
    Contact::showInfo();
    cout << "Birthday" << birthday << endl;
}
