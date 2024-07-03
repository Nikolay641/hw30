#include <iostream>
#include "Container.h"
#include "Person.h"
#include "Colleague.h"
#include "Friend.h"

using namespace std;

int main() {
    Container contacts;
    int choice, index, type;
    string phone;

    while (true) {
        contacts.showInfo();
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "\nSelect type(1-Person, 2-Colleague, 3-Friend): ";
            cin >> type;
            cin.ignore();

            if (type == 1) {
                string name, address, phone;
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter phone: ";
                getline(cin, phone);
                contacts.addContact(new Person(name, address, phone));
            }
            else if (type == 2) {
                string organization, address, fax, contactPerson, phone;
                cout << "Enter organization: ";
                getline(cin, organization);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter fax: ";
                getline(cin, fax);
                cout << "Enter contact person: ";
                getline(cin, contactPerson);
                cout << "Enter phone: ";
                getline(cin, phone);
                contacts.addContact(new Colleague(organization, address, fax, contactPerson, phone));
            }
            else if (type == 3) {
                string name, phone;
                Date birthday;
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter birthday: ";
                cin >> birthday;
                cin.ignore();
                cout << "Enter phone: ";
                getline(cin, phone);
                contacts.addContact(new Friend(name, birthday, phone));
            }
            else {
                cout << "Invalid type!" << endl;
            }
            break;
        }
        case 2: {
            
            cout << "Input index to remove: ";
            cin >> index;
            contacts.removeContact(index);
            break;
        }
        case 3: {

            cout << "Input index to edit: ";
            cin >> index;
            cout << "\nSelect type(1-Person, 2-Colleague, 3-Friend): ";
            cin >> type;
            cin.ignore();

            if (type == 1) {
                string name, address, phone;
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter phone: ";
                getline(cin, phone);
                contacts.editContact(index, new Person(name, address, phone));
            }
            else if (type == 2) {
                string organization, address, fax, contactPerson, phone;
                cout << "Enter organization: ";
                getline(cin, organization);
                cout << "Enter address: ";
                getline(cin, address);
                cout << "Enter fax: ";
                getline(cin, fax);
                cout << "Enter contact person: ";
                getline(cin, contactPerson);
                cout << "Enter phone: ";
                getline(cin, phone);
                contacts.editContact(index, new Colleague(organization, address, fax, contactPerson, phone));
            }
            else if (type == 3) {
                string name, phone;
                Date birthday;
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter birthday (YYYY-MM-DD): ";
                cin >> birthday;
                cin.ignore();
                cout << "Enter phone: ";
                getline(cin, phone);
                contacts.editContact(index, new Friend(name, birthday, phone));
            }
            else {
                cout << "Invalid type!" << endl;
            }
            break;
        }
        case 4: {

            cout << "Input phone number: ";
            cin >> phone;
            Contact* contact = contacts.searchContactByPhone(phone);
            if (contact) {
                contact->showInfo();
            }
            else {
                cout << "Contact not found!" << endl;
            }
            break;
        }
        case 5:
            contacts.showAll();
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
