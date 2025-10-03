#include "Cat.hpp"


Cat::Cat() : Animal(){
	this->type = "Cat";
	std::cout << "Cat default constructor called!\n"; 
}

Cat::Cat(const Cat &cpy) : Animal(){
	std::cout << "Cat copy constructor called!\n";
	*this = cpy;
}

Cat &Cat::operator=(const Cat &op){
	std::cout << "Cat assigning operation called\n";
	if (this != &op)
		this->type = op.type;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat destroyed!\n";
}

void Cat::makeSound()const{
	std::cout << "miau\n";
}