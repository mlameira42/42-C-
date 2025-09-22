#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	this->_name = "default";
	this->hitpts = 100;
	this->energypts = 50;
	this->attackdmg = 20;
	std::cout << "FragTrap default constructor created\n";
}
FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->hitpts = 100;
	this->energypts = 100;
	this->attackdmg = 30;
	std::cout << "FragTrap with params created\n";
}
FragTrap::FragTrap(const ClapTrap &cpy) : ClapTrap(cpy){
	std::cout << "FragTrap copy called\n";
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destuctor called\n";
}


void FragTrap::highFiveGuys(void){
	std::cout << "FragTrap " << this->_name << " wants to highfive!\n";
}