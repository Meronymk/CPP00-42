#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook(void);

		~PhoneBook(void);
		void showTable(void);
		void position();
	private:
		int pos;
		Contact contact[8];
};

# endif
