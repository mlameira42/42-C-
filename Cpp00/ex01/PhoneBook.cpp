#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	int index = 0;
	std::string input = new char;
	book.contact_num = 0;
	while (1)
	{
		std::cin >> input;
		if (!input.compare("EXIT"))
			break;
		if (!input.compare("ADD"))
		{
			std::cin >> input;
			book.addContact(input);
		}
		if (!input.compare("SEARCH"))
		{
			std::cin >> input;
			std::cout << book.searchContact(input) << std::endl;
		}
	}
	std::cout << "Bye Bye" << std::endl;
	return 0;
}
