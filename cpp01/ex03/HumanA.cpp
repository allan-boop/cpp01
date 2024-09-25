#include "HumanA.hpp"
#include <iostream>

typedef std::string str;

HumanA::HumanA(str name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
	return;
}