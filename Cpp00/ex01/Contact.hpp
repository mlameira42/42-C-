
#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include <iostream>



class Contact {
	public:
		
		Contact(){}
		~Contact(){}
		void CreateContact(std::string str, int i) {index = i; name = new char + str.length() + 1; name.append(str);}
		std::string GetName(){return name;}
	private:
		int index;
		std::string name;
};
class PhoneBook {
	public:
		Contact contacts[8];
		PhoneBook(){
			std::cout << "abc" << std::endl;
		}
		~PhoneBook(){
			std::cout << "def" << std::endl;
		}
};
#endif