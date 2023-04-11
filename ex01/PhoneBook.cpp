#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	pos = 0;
};
PhoneBook::~PhoneBook(void){};

void PhoneBook::showTable(void)
{
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string index;
	int i = 0;

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|····index·|first·name|·last·name|·nickname·|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (i < 8)
	{
		name = contact[i].getName();
		lastname = contact[i].getLastName();
		nickname = contact[i].getNickname();
		if (name.length() > 10 && name[0] != '\0')
		{ 
			name = contact[i].getName().substr(name.length() - 10);
			name[9] = '.';
		}
		if (lastname.length() > 10 && lastname[0] != '\0')
		{
			lastname = contact[i].getLastName().substr(lastname.length() - 10);
			lastname[9] = '.';
		}
		if (nickname.length() > 10 && nickname[0] != '\0')
		{
			nickname = contact[i].getNickname().substr(nickname.length() - 10);
			nickname[9] = '.';
		}
		std::cout << "|" << std::setw(9) << i + 1 << "·|" << std::setw(10) << name << "|" << std::setw(10) << lastname << "|" << std::setw(10) << nickname << "|" << std::endl;
		i++;
		name = "";
		lastname = "";
		nickname = "";
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (1)
	{
		std::cout << "Choose an option:" << std::endl;
		std::cout << "[1]·[2]·[3]·[4]·[5]·[6]·[7]·[8]·[BACK]" << std::endl;
		std::getline(std::cin, index);
		if (std::cin.eof() == 1)
			return;
		if (index == "BACK" || index == "back" || index == "b")
			return;
		else if (index == "1" || index == "2" ||index == "3" || index == "4" ||index == "5" || index == "6" || index == "7" || index == "8")
		{
			std::cout << "Name: " << contact[std::stoi(index) - 1].getName() << std::endl;
			std::cout << "Last Name: " << contact[std::stoi(index) - 1].getLastName() << std::endl;
			std::cout << "Nickname: " << contact[std::stoi(index) - 1].getNickname() << std::endl;
			std::cout << "Phone Number: " << contact[std::stoi(index) - 1].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << contact[std::stoi(index) -1].getSecret() << std::endl;
		}
		else
			std::cout << "Wrong input" << std::endl;
	}

}

void PhoneBook::position()
{ 
	if (pos == 8)
		pos = 0;
	contact[pos].changeContact();
	pos++;
}