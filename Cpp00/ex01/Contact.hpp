
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact {
	private:
		std::string contact[5];
	public:	
		Contact();
		~Contact();
		std::string inputread(std::string str);
		int CreateContact(std::string str);
		void GetCont(int index);
	
};
