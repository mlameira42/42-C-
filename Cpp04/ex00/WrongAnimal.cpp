#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default"){
	std::cout << "WrongAnimal default constructor called!\n"; 
}

WrongAnimal::WrongAnimal(std::string _type):type(_type){
	std::cout << "WrongAnimal constructor with parameters called!\n"; 

}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy){
	std::cout << "WrongAnimal copy constructor called!\n";
	*this = cpy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &op){
	std::cout << "WrongAnimal assigning operation called\n";
	if (this != &op)
		this->type;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destroyed!\n";
}

void WrongAnimal::makeSound()const{
	std::cout << "Wrong default for sounds. It does not make any sound!\n";
}

std::string	WrongAnimal::getType()const{
	return this->type;
}