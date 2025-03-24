#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		static const int MAX_CONTACTS = 8;
		Contact contacts[MAX_CONTACTS];
		int contact_count;
	
	public:
		PhoneBook();
		
		void addContact(Contact contact);

		int get_contact_count();
};

#endif
