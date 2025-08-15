#pragma once

#include <string>
#include <cstdlib>
#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string zombieN);
		~Zombie();
		void announce();
};
void randomChump( std::string name );
Zombie* newZombie( std::string name );
