#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name): _name(name){
	std::cout << "A beautiful little " << this->_name << " born." << std::endl;
	this->years_old++;
	return;
}

Pony::~Pony(void){
	std::cout << "At the age of " << this->years_old << " " << this->_name <<
		" ate too many " << this->meal << " and died from heart attack.\n";
}

void Pony::favorite_meal(std::string meal_){
	std::cout << this->_name << "'s favorite meal is " << meal_  << "." << std::endl;
	this->meal = meal_;
}

void Pony::hobbie(int choice){
	std::cout << this->_name << " loves ";
	switch(choice){
		case (1): std::cout << "swimming."; break;
		case (2): std::cout << "playing soccer."; break;
		case (3): std::cout << "hiking."; break;
		case (4): std::cout << "traveling."; break;
		case (5): std::cout << "cooking."; break;
		case (6): std::cout << "gossiping."; break;
		case (7): std::cout << "going out."; break;
		case (8): std::cout << "kissing guys."; break;
		case (9): std::cout << "watching TV."; break;
		case (0): std::cout << "going to church."; break;
	}
	std::cout << std::endl;
}

int Pony::years_old = 1;