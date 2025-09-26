#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal(){
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called!\n"; 
}

WrongCat::WrongCat(std::string _name): WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "WrongCat constructor with parameters called!\n"; 
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(){
	std::cout << "WrongCat copy constructor called!\n";
	*this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &op){
	std::cout << "WrongCat assigning operation called\n";
	if (this != &op)
		this->type = op.type;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destroyed!\n";
}

void WrongCat::makeSound()const{
	std::cout << "*screams in WrongCat*\n";
}