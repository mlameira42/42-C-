#include "Dog.hpp"


Dog::Dog() : Animal(){
	this->type = "Dog";
	this->mind = new Brain();
	std::cout << "Dog default constructor called!\n"; 
}



Dog::Dog(const Dog &cpy):Animal(){
	std::cout << "Dog copy constructor called!\n";
	if(!cpy.mind)return;
	this->mind = new Brain(*cpy.mind);
	this->type = "Dog";
}

Dog &Dog::operator=(Dog &op){
	std::cout << "Dog assigning operation called\n";
	if (this != &op)
	{
		std::swap(this->type, op.type);
		std::swap(this->mind, op.mind);;
	}
	return *this;
}


Dog::~Dog(){
	delete this->mind;
	std::cout << "Dog destroyed!\n";
}

void Dog::makeSound()const{
	std::cout << "au-au\n";
}

void Dog::dreamIdea(std::string idea){
	for(int i = 0; i<100; i++)
		if (this->mind->sayIdea(i).compare("") == 0)
			return this->mind->getIdeas(i, idea);
}
void Dog::stateIdeas() const {
	std::string str;
	for(int i = 0; i<100; i++){
		str = this->mind->sayIdea(i);
		if (str.empty())
			return;
		std::cout << str << "\n";
		}
}