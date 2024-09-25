#pragma once

#include <iostream>

typedef std::string str;

class Zombie
{
	public:
		Zombie(void);
		Zombie(str name);
		~Zombie(void);
		void announce(void);

	private:
		str _name;
};