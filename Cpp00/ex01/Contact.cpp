#include "Contact.hpp"

Contact::Contact()
{}
Contact::~Contact()
{}
std::string Contact::inputread(std::string str){
	std::getline(std::cin, str);
	if (std::cin.eof() == true || str.length() < 1)
		return "\n";
	return str;
}

int Contact::CreateContact(std::string str){
	for (int i = 0; i < 5; i++)
	{
		switch (i)
		{
		case 0:
			std::cout << "Add contact first name\n";
			break;
		case 1:
			std::cout << "Add "<< this->contact[0] << " last name\n";
			break;
		case 2:
			std::cout << "Add "<< this->contact[0] << " nickname\n";
			break;
		case 3:
			std::cout << "Add "<< this->contact[0] << " number\n";
			break;
		case 4:
			std::cout << "Add "<< this->contact[0] << " darkest secret\n";
			break;
		default:
			break;
		}
		this->contact[i] = inputread(str);
		while ((i == 3) && (this->contact[i].length() != 9))
		{
			std::cout << "Phone number error, it has to have 9 digits\n Please try again: \n";
			this->contact[i] = inputread(str);
		}
		if (!this->contact[i].compare("\n"))
			return 0;	
	}
	return 1;
}

void	Contact::GetCont(int index){
	std::cout << "|" << std::setw(10) << index;
	for (int i = 0; i <= 2; i++)
	{
		std::cout << "|";
		if (this->contact[i].length() > 10)
			std::cout << this->contact[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->contact[i];
	}
	std::cout << "|\n";
}
