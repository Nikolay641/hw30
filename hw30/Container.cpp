#include "Container.h"

void Container::addContact(Contact* contact)
{
    container.push_back(contact);
}

void Container::removeContact(int index)
{
    if (index >= 0 && index < container.size()) {
        container.erase(container.begin() + index);
    }
}

void Container::editContact(int index, Contact* contact)
{
    if (index >= 0 && index < container.size()) {
        delete container[index];
        container[index] = contact;
    }
}

Contact* Container::searchContactByPhone(string phone)
{
    for (auto contact : container) {
        if (contact->getPhone() == phone) {
            return contact;
        }
    }
}

void Container::showInfo() const
{
    cout << "1. Add Contact" << endl;
    cout << "2. Remove Contact" << endl;
    cout << "3. Edit Contact" << endl;
    cout << "4. Search Contact" << endl;
    cout << "5. Show All Contacts" << endl;
    cout << "0. Exit" << endl;
}

void Container::showAll() const
{
    for (auto contact : container) {
        contact->showInfo();
        cout << endl;
    }
}
