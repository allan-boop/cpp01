#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(void)
{
	return;
}

Weapon::Weapon(str type) : _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

str const &Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(str type)
{
	this->_type = type;
	return;
}