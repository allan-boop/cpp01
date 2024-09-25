#include <iostream>
#include "Zombie.hpp"
#include <cstdlib>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "Error: The number of zombies must be greater than 0." << std::endl;
		exit(1);
	}
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}

    return horde;
}