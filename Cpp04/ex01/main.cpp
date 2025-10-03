#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp" 
#include "WrongCat.hpp" 

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	delete i;
	delete j;

	Animal* obj[10];
	for (int i = 0; i < 10; i++){
		if (i % 2)	
			obj[i] = new Dog();
		else 
			obj[i] = new Cat();
		obj[i]->makeSound();
		std::cout << "\n";
	}
	for (int i = 0; i < 10; i++)
		delete obj[i];

		std::cout << "\n------------------Testing deep copy-------------\n";
	Cat *c2 = new Cat();
  	c2->dreamIdea("Hmm... fish!");
  	c2->dreamIdea("I wanna play...");
	std::cout << "Cat just gained the ability to talk!\n";
  	c2->stateIdeas();
	std::cout << "Cat lost his ability to talk!\n";

	Cat *c3 = new Cat(*c2);
	c2->dreamIdea("Im sleepy");
	std::cout << "Cat just gained the ability to talk!\n";
	std::cout << "Cat 2: \n";
	c2->stateIdeas();
	std::cout << "Cat 3: \n";
	c3->stateIdeas();
	std::cout << "Cat lost his ability to talk!\n";

	std::cout << "Testing assigment operator\n";
	Cat *c4 = new Cat();
	*c4 = *c3;
	c4->stateIdeas();
	c3->dreamIdea("Waking up...");
	std::cout << "Cat 3: \n";
	c3->stateIdeas();
	std::cout << "Cat 4: \n";
	c4->stateIdeas();
	delete c2;
	delete c3;
	delete c4;
	return 0;


}