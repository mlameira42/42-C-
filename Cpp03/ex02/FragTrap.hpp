#pragma once

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const ClapTrap &cpy);
		FragTrap &operator=(const FragTrap &op);
		~FragTrap();
		void highFiveGuys(void);
};
#endif