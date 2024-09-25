#pragma once
#include "Weapon.hpp"
#include <iostream>

typedef std::string str;

class HumanA
{
	public:
		HumanA(str name, Weapon &weapon);
		~HumanA(void);
		void attack(void);
	private:
		str _name;
		Weapon &_weapon;
};