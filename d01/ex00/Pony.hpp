#ifndef PONY_HPP
#define PONY_HPP
#include <string>

class Pony{
private:
	std::string _name;
public:
	Pony(std::string name);
	~Pony(void);

	std::string meal;
	static int years_old;
	void favorite_meal(std::string meal_);
	void hobbie(int choice);
};

#endif