#include "Dog.hpp"


Dog::Dog() : Animal(){
	this->type = "Dog";
	std::cout << "Dog default constructor called!\n"; 
}

Dog::Dog(const Dog &cpy):Animal(){
	std::cout << "Dog copy constructor called!\n";
	*this = cpy;
}

Dog &Dog::operator=(const Dog &op){
	std::cout << "Dog assigning operation called\n";
	if (this != &op)
		this->type = op.type;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog destroyed!\n";
}

void Dog::makeSound()const{
	std::cout << "au-au\n";
}