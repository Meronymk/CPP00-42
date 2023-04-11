#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	PhoneBook phonebook;
	std::string choice = "";

	std::cout << "·······················" << std::endl;
	std::cout << "·      Phonebook      ·" << std::endl;
	std::cout << "·······················" << std::endl;
	while(1)
	{
		std::cout << "Choose an option:" << std::endl;
		std::cout << "[ADD] · [SEARCH] · [EXIT]" << std::endl;
		std::getline(std::cin, choice);
		if (std::cin.eof() == 1)
			break;
		if (choice == "EXIT" || choice == "exit")
			exit (0);
		else if (choice == "ADD" || choice == "add")
		{
			phonebook.position();
		}
		else if (choice == "SEARCH" || choice == "search")
		{
			phonebook.showTable();
			continue;
		}
		else
			continue;
	}
}

