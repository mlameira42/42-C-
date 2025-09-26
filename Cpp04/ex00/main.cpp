#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp" 
#include "WrongCat.hpp" 

int main()
{
	const Animal* meta = new Animal();
	meta->makeSound();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal	*wrong_i = new WrongCat();
	std::cout << i->getType() << ": ";
	i->makeSound();
	std::cout << j->getType() << ": ";
	j->makeSound();
	std::cout << wrong_i->getType() << ": ";
	wrong_i->makeSound();
	delete meta;
	delete i;
	delete j;
	delete wrong_i;
	return 0;
}