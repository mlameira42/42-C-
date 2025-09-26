#pragma once

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
	private:

	public:
		Cat();
		Cat(std::string _name);
		Cat(const Cat &cpy);
		Cat &operator=(const Cat &op);
		~Cat();
		void makeSound()const;
};

#endif