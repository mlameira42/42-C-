#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	Contact contacts[8];
	public:
		int	contact_num;
		PhoneBook(){
			std::cout << "abc" << std::endl;
		}
		~PhoneBook(){
			std::cout << "def" << std::endl;
		}
		void addContact(std::string str){
			contacts[contact_num].CreateContact(str);
			contact_num++;
		}
		std::string searchContact(std::string){}
};

#endif