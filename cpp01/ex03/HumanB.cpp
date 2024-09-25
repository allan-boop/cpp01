#include "HumanB.hpp"
#include <iostream>

typedef std::string str;

HumanB::HumanB(str name) : _name(name)
{
	return;
}

HumanB::HumanB(str name, Weapon &weapon) : _name(name), _weapon(&weapon)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void HumanB::attack(void)
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << this->_name << " has no weapon to attack with!" << std::endl;
	}
	return;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return;
}