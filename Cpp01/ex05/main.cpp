#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string comp[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	std::cout << "List of complains:\n";
	for (int i = 0; i < 4; i++) 
		harl.complain(comp[i]);
	return 0;
}
