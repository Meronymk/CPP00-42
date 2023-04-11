#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstring>
# include <iomanip> 

class Contact {
	public:
		Contact(void);

		~Contact(void);
		void changeContact(void);
		void filterContact(void);

		std::string getName(void) const;
		std::string getNickname(void) const;
		std::string getSecret(void) const;
		std::string getPhoneNumber(void) const;
		std::string getLastName(void) const;
	private:
		std::string	_name;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_secret;
		std::string	_phonenumber;
};

# endif
