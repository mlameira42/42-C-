#include "Zombie.hpp"

Zombie::Zombie(std::string zombieN){
	this->name = zombieN;
	std::cout << this->name << " constructor created\n";

}

Zombie::~Zombie(){
	std::cout << this->name << "Delete itself from existence\n";
}


void Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

