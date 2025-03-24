#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	private:
		std::string m_firstName = "";
		std::string m_lastName = "";
		std::string m_nickname = "";
		std::string m_phoneNumber = "";
		std::string m_darkestSecret = "";
	
	public:
		Contact();

		// Define all contact fields from user input in a single function
		void inputContactFields();

		void print(int index) const;
		void printAll() const;
};

#endif
