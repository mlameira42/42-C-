#include "Contact.hpp"

Contact::Contact()
{}
Contact::~Contact()
{}

void Contact::CreateContact(std::string str){
	std::cout << "Add contact first name\n";
	std::getline(std::cin, str);
	if (std::cin.eof() == true)
		exit(0);
	int i = str.find_first_of(" ");
	if (i != -1)
	{
		this->fname = str.substr(0, i);
		this->lname = str.substr(i, str.length()-1);
	}
	else
	{
		this->fname = str;	
		std::cout << "Add "<< this->fname << " last name\n";
		std::getline(std::cin, str);
		if (std::cin.eof() == true)
			exit(0);
		this->lname = str;
	}
	std::cout << "Add "<< this->fname << " nickname\n";
	std::getline(std::cin, str);
	if (std::cin.eof() == true)
		exit(0);
	this->nname = str;
	std::cout << "Add "<< this->fname << " number\n";
	std::getline(std::cin, str);
	if (std::cin.eof() == true)
		exit(0);
	this->number = str;
	std::cout << "Add "<< this->fname << " darkest secret\n";
	std::getline(std::cin, str);
	if (std::cin.eof() == true)
		exit(0);
	this->secret = str;
}

std::string Contact::GetName(){
	return fname;
}
