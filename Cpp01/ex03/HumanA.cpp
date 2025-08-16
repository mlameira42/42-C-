#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon wp){
	name = str;
	weapon = wp;
}

void HumanA::attack(){
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}