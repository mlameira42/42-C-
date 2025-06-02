#include "Contact.hpp"

int len(char *name){
	int i = -1;
	while (name[++i])
		;
	return i;
};
int ft_cmp(char *str, char *cmpstr){
	int i;
	for (i = 0; str[i] == cmpstr[i]; i++) {if (!str[i] && !cmpstr[i]) return 0;}
	return 1;
}

int main(void)
{
	PhoneBook book;
	int index = 0;
	char *input = new char;
	while (1)
	{
		std::cin >> input;
		if (ft_cmp(input, "EXIT"))
			break; 
		book.contacts[0].CreateContact(input, len(input), index);
		std::cout << book.contacts[0].GetName() << std::endl;
	}
	std::cout << "Bye Bye" << std::endl;
	return 0;
}
