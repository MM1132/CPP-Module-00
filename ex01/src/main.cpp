#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

namespace {
	bool inputPrompt(const std::string& str, std::string& input)
	{
		std::cout << str;
		return (bool) std::getline(std::cin, input);
	}
}

int main()
{
	PhoneBook phoneBook;

	std::string input;
	while (inputPrompt("Enter action (ADD/SEARCH/EXIT): ", input))
	{
		if (!input.compare("ADD"))
		{
			phoneBook.createNewContact();
		}
		else if (!input.compare("SEARCH"))
		{
			phoneBook.print();
			if (!inputPrompt("Enter contact index: ", input))
				continue;
			try
			{
				int contactIndex = std::stoi(input);
				phoneBook.printContactAt(contactIndex);
			}
			catch(const std::exception& e)
			{
				std::cout << "Next time, please enter a valid number :c" << std::endl;
			}
		}
		else if (!input.compare("EXIT"))
		{
			break;
		}
	}

	return 0;
}
