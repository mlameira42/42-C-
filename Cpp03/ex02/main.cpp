#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a;
	ScavTrap b("Clank");
	FragTrap c("Blink");

	a.attack("Clank");
	b.takeDamage(3);
	b.attack("default");
	a.takeDamage(4);
	for (int i = 0; i < 10; i++)
	{
		a.attack("Blink");
		c.takeDamage(6);	
	}
	c.beRepaired(4);
	a.beRepaired(5);
	b.beRepaired(3);
	return 0;
}
