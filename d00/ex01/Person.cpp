#include <iomanip>
#include <string>
#include "Person.hpp"

#define FIX_CIN std::cin.clear();std::cin.ignore()
#define CIN_CHECK(x) if (x) FIX_CIN

Person::Person() { }

bool	Person::exists(void) { return (first != ""); }

void	Person::addPerson(void)
{
	std::cout << "First Name: "; std::getline(std::cin, first);
	std::cout << "Last Name: "; std::getline(std::cin, last);
	std::cout << "Nickname: "; std::getline(std::cin, nick);
	std::cout << "Login: "; std::getline(std::cin, login);
	std::cout << "Address: "; std::getline(std::cin, address);
	while (true)
	{
		std::cout << "Email: "; std::getline(std::cin, email);
		if (email.find('@') != std::string::npos &&
			email.find('.') != std::string::npos)
			break;
	}
	while (true)
	{
		std::cout << "Phone: "; std::getline(std::cin, phone);
		if (phone.find_first_not_of("0123456789") == std::string::npos)
			break;
	}
	do {
		std::cout << "Birthday Month (MM): ";
		CIN_CHECK(!(std::cin >> bmonth));
	} while (bmonth < 1 || bmonth > 12);
	do {
		std::cout << "Birthday Day (DD): ";
		CIN_CHECK(!(std::cin >> bday));
	} while (bday < 1 || bday > 31);
	do {
		std::cout << "Birthday Year(YYYY): ";
		CIN_CHECK(!(std::cin >> byear));
	} while (byear < 1900 || byear > 2018);
	std::cout << "Favorite Meal: "; std::getline(std::cin, meal);
	std::cout << "Underwear Color: "; std::getline(std::cin, color);
	std::cout << "Darkest Secret: "; std::getline(std::cin, secret);
}

std::string	fixWidth(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

void	Person::showIndex(int i)
{
	std::cout << std::internal << std::setfill(' ') << std::setw(10)
			<< i << "|";
	std::cout << std::internal << std::setfill(' ') << std::setw(10)
			<< fixWidth(first) << "|";
	std::cout << std::internal << std::setfill(' ') << std::setw(10)
			<< fixWidth(last) << "|";
	std::cout << std::internal << std::setfill(' ') << std::setw(10)
			<< fixWidth(nick) << "|";
	std::cout << std::endl;
}

void	Person::showPerson(void)
{
	std::cout << "First Name: " << first << std::endl;
	std::cout << "Last Name: " << last << std::endl;
	std::cout << "Nickname: " << nick << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Address: " << address << std::endl;
	std::cout << "Email: " << email << std::endl;
	std::cout << "Phone: " << phone << std::endl;
	std::cout << "Birthday: " << bmonth << "/" << bday << "/" << byear << std::endl;
	std::cout << "Favorite Meal: " << meal << std::endl;
	std::cout << "Underwear Color: " << color << std::endl;
	std::cout << "Secret: " << secret << std::endl;
}