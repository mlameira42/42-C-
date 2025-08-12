#pragma once

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
	public:
		int contacts_add;
		int	contact_num;
		PhoneBook();
		~PhoneBook();
		void addContact(std::string str);
		int readinput(std::string *input);
		void searchContact();
};
