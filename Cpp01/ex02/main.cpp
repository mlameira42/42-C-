#include <iostream>
#include <string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain; 

	std::cout << &brain << "\t|" << &stringPTR << "\t|" << &stringREF << "\n";
	std::cout << brain << "\t|" << *stringPTR << "\t|" << stringREF << "\n";
	return 0;
}
