#pragma once

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
	protected:
		std::string _name;
		unsigned int hitpts;
		unsigned int energypts;
		unsigned int attackdmg;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &cpy);
		ClapTrap &operator=(const ClapTrap &op);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif