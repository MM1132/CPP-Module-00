#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
	private:
		static const int MAX_CONTACTS = 8;
		Contact m_contacts[MAX_CONTACTS];
		int m_contactCount;
	
	public:
		PhoneBook();

		// Gets input for a new contact and adds it to the array fo contacts
		void createNewContact();

		int getContactCount() const;

		void print() const;
		void printContactAt(int index) const;
};

#endif
