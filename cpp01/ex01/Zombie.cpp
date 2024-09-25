#include "Zombie.hpp"

typedef std::string str;

Zombie::Zombie() : _name("Unnamed") {
	std::cout << "A zombie Unnamed has been created." << std::endl;
	return ;
}

Zombie::Zombie(str name) : _name(name) {
	std::cout << "A zombie " << this->_name << " has been created." << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " is dead." << std::endl;
	return ;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::setName(str name) {
	this->_name = name;
	return ;
}