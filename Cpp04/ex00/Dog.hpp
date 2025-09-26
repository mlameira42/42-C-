#pragma once

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	private:
		std::string name;
	public:
		Dog();
		Dog(std::string _name);
		Dog(const Dog &cpy);
		Dog &operator=(const Dog &op);
		~Dog();
		void makeSound()const;
};

#endif