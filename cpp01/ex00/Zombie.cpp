#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) : _name("Unnamed") {
	std::cout << this->_name << " is born." << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << this->_name << " is born." << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is dead." << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
