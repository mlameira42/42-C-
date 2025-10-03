#include "Cat.hpp"


Cat::Cat() : Animal(){
	this->type = "Cat";
	this->mind = new Brain();
	std::cout << "Cat default constructor called!\n"; 
}

Cat::Cat(const Cat &cpy) : Animal(){
	std::cout << "Cat copy constructor called!\n";
	if(!cpy.mind)return;
	this->mind = new Brain(*cpy.mind);
	this->type = "Cat";
}


Cat &Cat::operator=(Cat &op){
	std::cout << "Cat assigning operation called\n";
	if (this != &op)
	{
		std::swap(this->type, op.type);
		std::swap(this->mind, op.mind);;
	}
	return *this;
}

Cat::~Cat(){
	delete this->mind;
	std::cout << "Cat destroyed!\n";
}

void Cat::makeSound()const{
	std::cout << "miau\n";
}

void Cat::dreamIdea(std::string idea){
	for(int i = 0; i<100; i++)
		if (this->mind->sayIdea(i).compare("") == 0)
			return this->mind->getIdeas(i, idea);
}
void Cat::stateIdeas() const {
	std::string str;
	for(int i = 0; i<100; i++){
		str = this->mind->sayIdea(i);
		if (str.empty())
			return;
		std::cout << str << "\n";
		}
}