#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a;
	ClapTrap b("Clank");

	a.attack("Clank");
	b.takeDamage(3);
	b.attack("default");
	a.takeDamage(4);
	a.takeDamage(6);
	a.beRepaired(5);
	b.beRepaired(3);
	return 0;
}
