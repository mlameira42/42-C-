#include "Contact.hpp"

Contact::Contact()
{}
Contact::~Contact()
{}

void Contact::CreateContact(std::string str){
	this->name = str;
}

std::string Contact::GetName(){
	return name;
}
