#pragma once

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain *mind;
	public:
		Dog();
		Dog(const Dog &cpy);
		Dog &operator=(Dog &op);
		~Dog();
		void makeSound()const;
		void dreamIdea(std::string idea);
		void stateIdeas() const;
};

#endif