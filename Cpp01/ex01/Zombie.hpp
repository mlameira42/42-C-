#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

class Zombie{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		void announce();
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );