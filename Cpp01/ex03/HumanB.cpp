#include "HumanB.hpp"

HumanB::HumanB(std::string str){
	name = str;
}

void HumanB::attack(){
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}

void HumanB::setWeapon(Weapon wp){
	weapon = wp;
}
