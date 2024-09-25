#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* newZombie( std::string name );
void randomChump(std::string name);

typedef std::string str;

int main(void)
{
	Zombie *zombie1 = newZombie("Zombie1");
	zombie1->announce();
	randomChump("Zombie2");
	delete zombie1;
	return (0);
}

