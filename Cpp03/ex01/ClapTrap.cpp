#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("default"), hitpts(10), energypts(10), attackdmg(0){
	std::cout << "ClapTrap default construct created\n";
}

ClapTrap::ClapTrap(std::string name):hitpts(10), energypts(10), attackdmg(0){
	std::cout << "ClapTrap construct with param created\n";
	this->_name = name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &op){
	if (this != &op)
	{
		this->_name = op._name;
		this->attackdmg = op.attackdmg;
		this->energypts = op.energypts;
		this->hitpts = op.hitpts;
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &cpy){
	std::cout << "ClapTrap Copy Constructer\n";
	*this = cpy;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destroyed\n";
}

void ClapTrap::attack(const std::string& target){
	if (this->hitpts <= 0)
		return (void)(std::cout << this->_name << " is dead and cant attack " << 
		target << "!\n");
	if (this->energypts <= 0)
		return (void)(std::cout << this->_name << " has no energy, therefore, can't attack "<<
		target << "!\n");
	this->energypts--;
	std::cout << "ClapTrap " << this->_name << " attacks " <<
	target << " causing " << this->attackdmg << " points of damage!\n";
}
void ClapTrap::takeDamage(unsigned int amount){
	if (this->hitpts <= amount)
	{
		if (this->hitpts != 0)
			std::cout << "ClapTrap " << this->_name << " died\n";
		else 
			std::cout << "ClapTrap " << this->_name << " is already dead\n";
		this->hitpts = 0;
	}
	else
	{
		this->hitpts -= amount;
		std::cout << "ClapTrap " << this->_name << " suffered " << amount << " of damage\n";
	}
}
void ClapTrap::beRepaired(unsigned int amount){
	if (this->hitpts == 0)
		return (void)(std::cout << "ClapTrap " << this->_name << " tried to regenerate but is dead\n");
	if (this->hitpts + amount < 10)
		this->hitpts += amount;
	else
		this->hitpts = 10;
	std::cout << "ClapTrap " << this->_name << " regenerated " << amount << " of hit points!\n";
}