
#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include <iostream>



class Contact {
	public:
		
		Contact(){}
		~Contact(){}
		int Foo(){
			int i = -1;
			while (name[++i])
				;
			return i;
		}
		void CreateContact(char *str, int len, int i) {index = i; name = new char + len + 1; name = str;}
		char *GetName(){return name;}
	private:
		int index;
		char *name;
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