#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->contact_num = 0;
}
PhoneBook::~PhoneBook(){
}
void PhoneBook::addContact(std::string str){
	contacts[contact_num].CreateContact(str);
	contact_num++;
	if (contact_num == 8)
		contact_num = 0;
	std::cout << "Contact created\n";
}

std::string PhoneBook::searchContact(std::string str)
{
	int i = 0;

	std::getline(std::cin, str);
	if (std::cin.eof() == true)
		return 0;
	while (i < 8 && str.compare(this->contacts[i].GetName()))
			i++;
	if (i != 8)
		return this->contacts[i].GetName();
	return "No name found";
}
