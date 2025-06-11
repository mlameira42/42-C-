#include "Contact.hpp"

int main(void)
{
	PhoneBook book;
	int index = 0;
	std::string input = new char;
	while (1)
	{
		std::cin >> input;
		if (!input.compare("EXIT"))
			break;
		if (!input.compare("ADD"))
		{
			std::cin >> input;
			book.contacts[0].CreateContact(input, index);
			std::cout << book.contacts[0].GetName() << std::endl;
		}
		if (!input.compare("SEARCH"))
			break;
	}
	std::cout << "Bye Bye" << std::endl;
	return 0;
}
