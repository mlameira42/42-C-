#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string comp[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (i == 0)
			std::cout << i+1 << "'st complain:\n";
		else
			std::cout << i+1 << "'th complain:\n"; 
		harl.complain(comp[i]);
	}
	return 0;
}
