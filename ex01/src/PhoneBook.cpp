#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>

PhoneBook::PhoneBook() :
	m_contactCount(0)
{}

void PhoneBook::createNewContact()
{
	Contact contact;

	try 
	{
		contact.inputContactFields();
		if (m_contactCount >= MAX_CONTACTS)
		{
			m_contacts[MAX_CONTACTS - 1] = contact;
			return;
		}
		m_contacts[m_contactCount++] = contact;
		std::cout << "Contact added successfully" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error creating account: " << e.what() << std::endl;
	}
}

int PhoneBook::getContactCount() const
{
	return m_contactCount;
}

void PhoneBook::print() const
{
	for (int i = 0; i < m_contactCount; i++)
	{
		m_contacts[i].print(i);
		std::cout << std::endl;
	}
}

void PhoneBook::printContactAt(int index) const
{
	// Checking bounds
	if (index < 0 || index >= m_contactCount)
		return (void)(std::cout << "Could not find the contact\n");

	m_contacts[index].printAll();
}
