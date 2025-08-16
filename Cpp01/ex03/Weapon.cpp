#include "Weapon.hpp"

Weapon::Weapon(std::string weapon){
	type = weapon;
}
Weapon::Weapon(){}

Weapon::~Weapon(){}
std::string Weapon::getType() const {
	return type;
}
void Weapon::setType(std::string const newvalue){
	type = newvalue;
}