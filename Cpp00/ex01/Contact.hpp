
#pragma once
#include <iostream>
#include <stdlib.h>

class Contact {
	private:
		std::string name;
	public:	
		Contact();
		~Contact();
		void CreateContact(std::string str);
		std::string GetName();
	
};
