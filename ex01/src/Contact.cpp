#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

namespace {
	// Always 10 characters width
	// If more than 10, print the 10th character as '.'
	void printField(const std::string& r_field)
	{
		using namespace std;

		// The `setw` function makes sure that we always print at least 10 characters
		// Even if the string is shorter
		if (r_field.length() > 10)
			cout << setw(9) << r_field.substr(0, 9) << '.';
		else
			cout << setw(10) << r_field;
	}
}

Contact::Contact()
{}

void Contact::inputContactFields()
{
	constexpr const char* INPUT_ERROR = "Input from the user cannot be empty";

	std::cout << "Creating a new contact...\n";
	std::cout << "First name: ";
	if (!std::getline(std::cin, m_firstName) || m_firstName.empty())
		throw std::runtime_error(INPUT_ERROR);
	
	std::cout << "Last name: ";
	if (!std::getline(std::cin, m_lastName) || m_lastName.empty())
		throw std::runtime_error(INPUT_ERROR);
	
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, m_nickname) || m_nickname.empty())
		throw std::runtime_error(INPUT_ERROR);
	
	std::cout << "Phone number: ";
	if (!std::getline(std::cin, m_phoneNumber) || m_phoneNumber.empty())
		throw std::runtime_error(INPUT_ERROR);
	
	std::cout << "Darkest secret: ";
	if (!std::getline(std::cin, m_darkestSecret) || m_darkestSecret.empty())
		throw std::runtime_error(INPUT_ERROR);
}

void Contact::print(int index) const
{
	const std::string strIndex = std::to_string(index);

	printField(strIndex);
	std::cout << "|";
	printField(m_firstName);
	std::cout << "|";
	printField(m_lastName);
	std::cout << "|";
	printField(m_nickname);
}

void Contact::printAll() const
{
	std::cout << "First name: " << m_firstName << std::endl;
	std::cout << "Last name: " << m_lastName << std::endl;
	std::cout << "Nickname: " << m_nickname << std::endl;
	std::cout << "Phone number: " << m_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << m_darkestSecret << std::endl;
}
