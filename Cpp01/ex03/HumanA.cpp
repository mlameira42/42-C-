#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &wp):weapon(wp){
	name = str;
	std::cout << name << " Constructor created\n";
}

HumanA::~HumanA(){
	std::cout << name << " Destructed itself\n";
}

void HumanA::attack(){
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}