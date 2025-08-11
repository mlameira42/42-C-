
#pragma once
#include <iostream>
#include <stdlib.h>

class Contact {
	private:
		std::string fname;
		std::string lname;
		std::string nname;
		std::string number;
		std::string secret;
	public:	
		Contact();
		~Contact();
		void CreateContact(std::string str);
		std::string GetName();
	
};
