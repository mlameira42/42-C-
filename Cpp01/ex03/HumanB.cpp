#include "HumanB.hpp"

HumanB::HumanB(std::string str) : weapon(NULL){
	name = str;
	std::cout << name << " Constructor created\n";
}

HumanB::~HumanB(){
	std::cout << name << " Destructed itself\n";
}

void HumanB::attack(){
	if (!weapon)
		return (void)(std::cout << name << " tried to attack with nothing and it failed\n");
	std::cout << name << " attacks with their " << (*weapon).getType() << "\n";
}

void HumanB::setWeapon(Weapon &wp){
	weapon = &wp;
}
