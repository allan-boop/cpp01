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

int getIndex(str var, str levels[]) {
	int varIndex = 4;

	for (int i = 0; i < 4; i++) {
		if (var == levels[i]) {
			varIndex = i;
			break;
		}
	}
	return varIndex;
}

void Harl::complain(str filter) {
	str levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int	filterIndex = getIndex(filter, levels);

	void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	switch (filterIndex) {
		case 0: {
			(this->*functions[filterIndex++])();
			__attribute__((fallthrough));
		}
		case 1: {
			(this->*functions[filterIndex++])();
			__attribute__((fallthrough));
		}
		case 2: {
			(this->*functions[filterIndex++])();
			__attribute__((fallthrough));
		}
		case 3: {
			(this->*functions[filterIndex++])();
			break;
		}
		default: {
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
}