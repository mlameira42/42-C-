#pragma once

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	private:
	
	public:
		WrongCat();
		WrongCat(std::string _name);
		WrongCat(const WrongCat &cpy);
		WrongCat &operator=(const WrongCat &op);
		~WrongCat();
		void makeSound()const;
};

#endif