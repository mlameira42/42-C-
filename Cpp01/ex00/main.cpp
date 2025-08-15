#include "Zombie.hpp"

int main(void)
{
	Zombie* z = newZombie("Miguel");
	z->announce();
	randomChump("Duque");
	delete z;
	return 0;
}
