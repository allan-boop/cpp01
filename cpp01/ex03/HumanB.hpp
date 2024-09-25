#pragma once
#include "Weapon.hpp"
#include <iostream>

typedef std::string str;

class HumanB
{
	public:
		HumanB(str name);
		HumanB(str name, Weapon &weapon);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon &weapon);

	private:
		str _name;
		Weapon *_weapon;
};