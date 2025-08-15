#include "Zombie.hpp"

Zombie::Zombie(std::string zombieN){
	this->name = zombieN;
}

Zombie::~Zombie(){
	std::cout << this->name << "\n";
}


void Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

