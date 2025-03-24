#include "PhoneBook.hpp"

PhoneBook::PhoneBook() :
	contact_count(0)
{}

void PhoneBook::addContact(Contact contact)
{
	if (contact_count >= MAX_CONTACTS)
	{
		contacts[MAX_CONTACTS - 1] = contact;
		return;
	}

	contacts[contact_count] = contact;
	contact_count++;
}

int PhoneBook::get_contact_count()
{
	return contact_count;
}
