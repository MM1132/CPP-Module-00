#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phoneBook;
	phoneBook.addContact(Contact());
	phoneBook.addContact(Contact());

	int contact_count = phoneBook.get_contact_count();
	std::cout << contact_count << std::endl;

	return 0;
}
