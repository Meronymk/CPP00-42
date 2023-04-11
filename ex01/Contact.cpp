#include "Contact.hpp"

// constructor & destructor
Contact::Contact(void){};
Contact::~Contact(void){};

void Contact::changeContact(void)
{
	std::cout << "Enter Name:";
	std::getline(std::cin, _name);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Enter Last Name:";
	std::getline(std::cin, _lastname);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Enter Nickname:";
	std::getline(std::cin, _nickname);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Enter Phone Number:";
	std::getline(std::cin, _phonenumber);
	if (std::cin.eof() == 1)
		return;
	std::cout << "Enter Darkest Secret:";
	std::getline(std::cin, _secret);
	if (std::cin.eof() == 1)
		return;
	return;
}

std::string Contact::getName(void) const
{
	return (_name);
}

std::string Contact::getNickname(void) const
{
	return (_nickname);
}

std::string Contact::getSecret(void) const
{
	return (_secret);
}

std::string Contact::getPhoneNumber(void) const
{
	return (_phonenumber);
}

std::string Contact::getLastName(void) const
{
	return (_lastname);
}
