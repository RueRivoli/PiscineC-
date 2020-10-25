#include "Person.hpp"

void	displayIndex(Person person[8])
{
	int	i = 0;

	std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
	while (i < 8 && person[i].exists())
	{
		person[i].showIndex(i);
		i++;
	}
}

int		getIndex(Person person[8])
{
	int	choice = -1;

	do {
		std::cout << "Index Search: ";
		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore();
			choice = -1;
		}
	} while (choice < 0 || choice > 7 || !person[choice].exists());
	return (choice);
}

int		main()
{
	std::string	cmd;
	Person		person[8];
	int			i = 0;

	std::cout << "Accessing Phonebook..." << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	do {
		getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			person[i].addPerson();
			i += (i == 7 ? -7 : 1);
		}
		else if (cmd == "SEARCH")
		{
			if (person[0].exists())
			{
				displayIndex(person);
				person[getIndex(person)].showPerson();
			}
			else
				std::cout << "The phonebook is empty" << std::endl;
		}
	} while (cmd != "EXIT");
	std::cout << "Closing Phonebook..." << std::endl;
	return (0);
}