#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void){
	Pony* alicia = new Pony("Alicia");
	alicia->favorite_meal("ice cream");
	alicia->hobbie(8);
	delete alicia;
}

void ponyOnTheStack(void){
	Pony bob = Pony("Bobby");

	bob.favorite_meal("spagetti with meat balls");
	bob.hobbie(3);
	return;
}

int main(void){
	std::cout << "ponyOnTheHeap:" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl << "ponyOnTheStack:" << std::endl;
	ponyOnTheStack();
}