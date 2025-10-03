#pragma once

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain* mind;
		std::string name;
	public:
		Cat();
		Cat(const Cat &cpy);
		Cat &operator=(Cat &op);
		~Cat();
		void makeSound()const;
		void dreamIdea(std::string idea);
		void stateIdeas() const;
};

#endif