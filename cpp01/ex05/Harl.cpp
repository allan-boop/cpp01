#include "Harl.hpp"
#include <iostream>

typedef std::string str;

void Harl::debug(void) {
	std::cout << "DEBUG message" << std::endl;
	return;
}

void Harl::info(void) {
	std::cout << "INFO message" << std::endl;
	return;
}

void Harl::warning(void) {
	std::cout << "WARNING message" << std::endl;
	return;
}

void Harl::error(void) {
	std::cout << "ERROR message" << std::endl;
	return;
}

void Harl::complain(str level) {
	void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	str levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*functions[i])();
			return;
		}
	}
}