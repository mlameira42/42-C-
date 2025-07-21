
#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include <iostream>



class Contact {
	public:	
		std::string name;
		Contact(){}
		~Contact(){}
		void CreateContact(std::string str) 
			{
				this->name = str;
			}
		std::string GetName(){return name;}
	
};

#endif