#include "Animal.hpp"

Animal::Animal() : type("default"){
	std::cout << "Animal default constructor called!\n"; 
}

Animal::Animal(std::string _type):type(_type){
	std::cout << "Animal constructor with parameters called!\n"; 

}

Animal::Animal(const Animal &cpy){
	std::cout << "Animal copy constructor called!\n";
	*this = cpy;
}

Animal &Animal::operator=(const Animal &op){
	std::cout << "Animal assigning operation called\n";
	if (this != &op)
		this->type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal destroyed!\n";
}

void Animal::makeSound()const{
	std::cout << "Default for sounds. It does not make any sound!\n";
}

std::string	Animal::getType()const{
	return this->type;
}