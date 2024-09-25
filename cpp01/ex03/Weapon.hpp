#pragma once

#include <iostream>
typedef std::string str;

class Weapon
{
	public:
		Weapon(void);
		Weapon(str type);
		~Weapon(void);
		str const &getType(void);
		void setType(str type);

	private:
		str _type;
};