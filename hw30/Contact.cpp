#include "Contact.h"

Contact::Contact()
{
    phone = "1234567890";
}

Contact::Contact(string phone)
{
    this->phone = phone;
}

void Contact::setPhone(string phone){ this->phone = phone; }

string Contact::getPhone() const{ return phone; }

void Contact::showInfo() const
{
    cout << "Phone: " << phone << endl;
}
