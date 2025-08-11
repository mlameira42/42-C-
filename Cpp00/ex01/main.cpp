#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	std::string input;
	book.contact_num = 0;
	while (std::getline(std::cin, input))
	{
		if (std::cin.eof() == true)
			return 0;
		if (!input.compare("EXIT"))
			break;
		if (!input.compare("ADD"))
		{
			
			book.addContact(input);
		}
		if (!input.compare("SEARCH"))
		{
			//TODO: Display a list of contacts
			std::cout << book.searchContact(input) << "\n";
		}
	}
	std::cout << "Exiting.\n";
	return 0;
}
