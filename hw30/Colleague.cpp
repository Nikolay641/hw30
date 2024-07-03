#include "Colleague.h"

Colleague::Colleague()
{
    organization = "Empty";
    address = "Empty";
    fax = "Empty";
    contactPerson = "Empty";
}

Colleague::Colleague(string organization, string address, string fax, string contactPerson, string phone) : Contact(phone)
{
    this->organization = organization;
    this->address = address;
    this->fax = fax;
    this->contactPerson = contactPerson;
}

void Colleague::setOrganization(string organization){ this->organization = organization; }

void Colleague::setAddress(string address){ this->address = address; }

void Colleague::setFax(string fax) { this->fax = fax; }

void Colleague::setContactPerson(string contactPerson){ this->contactPerson = contactPerson; }

string Colleague::getOrganization() const{ return organization; }

string Colleague::getAddress() const{ return address; }

string Colleague::getFax() const{ return fax; }

string Colleague::getContactPerson() const{ return contactPerson; }

void Colleague::showInfo() const
{
    cout << "Organization: " << organization << endl;
    cout << "Address: " << address << endl;
    Contact::showInfo();
    cout << "Fax: " << fax << endl;
    cout << "Contact person: " << contactPerson << endl;
}
