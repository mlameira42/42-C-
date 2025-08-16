#pragma once

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string weapon);
		Weapon();
		~Weapon();
		std::string getType() const;
		void setType(std::string const newvalue);
};