#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->contact_num = 0;
	this->contacts_add = 0;
}
PhoneBook::~PhoneBook(){
}
void PhoneBook::addContact(std::string str){
	if (!contacts[contact_num].CreateContact(str))
	{
		std::cout << "Error creating contact\n";
		return;
	}
	if (contacts_add != 8)
		contacts_add++;
	contact_num++;
	if (contact_num == 8)
		contact_num = 0;
	std::cout << "Contact created\n";
}

void PhoneBook::searchContact()
{
	int	index;

	if (this->contacts_add == 0)
		std::cout << "Please add at least one contact before searching.\n";
	else
	{
		std::string input;
		std::cout << "Please select which contact index to show you. (0 to quit searching)\nIndex: \n";
		while (!(std::getline(std::cin, input)) || input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0 || std::atoi(input.c_str()) -1 >= this->contacts_add)
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
				std::exit(0);
			}
			else if (input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0)
			{
				std::cin.clear();
				std::cout << "Only digits in range of 1 to 8 are allowed.\n";
				std::cout << "Please select which contact to should show. (0 to quit searching)\nIndex: \n";
			}
			else if (std::atoi(input.c_str()) - 1 >= this->contacts_add)
			{
				std::cout << "You only have " << this->contacts_add << " Contacts saved.\n";
				std::cin.clear();
				std::cout << "Please select which contact to should show. (0 to quit searching)\nIndex: \n";
			}
		}
		index = std::atoi(input.c_str());
		if (index > 0)
		{
			std::cout << "|-------------------------------------------|\n";
			std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
			std::cout << "|----------|----------|----------|----------|\n";
			this->contacts[index - 1].GetCont(index);
			std::cout << "|-------------------------------------------|\n";
		}
		else
			std::cout << "Exiting search...\n";
	}
}
/*int i = 0;

std::getline(std::cin, str);
if (std::cin.eof() == true)
	return 0;
while (i < 8 && str.compare(this->contacts[i].GetName()))
		i++;
if (i != 8)
	return this->contacts[i].GetName();
return "No name found";*/
