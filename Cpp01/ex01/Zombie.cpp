#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Zombie constructor created\n";
}

Zombie::~Zombie(){
	std::cout <<"Zombie destructed itself\n";
}

void Zombie::announce(){
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name){
	_name = name;
}