#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	this->_name = "default";
	this->hitpts = 100;
	this->energypts = 50;
	this->attackdmg = 20;
	std::cout << "ScavTrap default constructor created\n";
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->hitpts = 100;
	this->energypts = 50;
	this->attackdmg = 20;
	std::cout << "ScavTrap with params created\n";
}
ScavTrap::ScavTrap(const ClapTrap &cpy) : ClapTrap(cpy){
	std::cout << "ScavTrap copy called\n";
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destuctor called\n";
}

void ScavTrap::attack(const std::string& target){
	if (this->hitpts <= 0)
		return (void)(std::cout << "Scavtrap " << this->_name << " is dead and cant attack " << 
		target << "!\n");
	if (this->energypts <= 0)
		return (void)(std::cout << "Scavtrap " << this->_name << " has no energy therefore, can't attack "<<
		target << "!\n");
	this->energypts--;
	std::cout << "ScavTrap " << this->_name << " attacks " <<
	target << " causing " << this->attackdmg << " points of damage!\n";
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode\n";
}