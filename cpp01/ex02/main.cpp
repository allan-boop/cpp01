#include <iostream>

typedef std::string str;

int main(void) {
	str s = "HI THIS IS BRAIN";
	str *stringPTR = &s;
	str &stringREF = s;

	std::cout << "Address in memory of the string: " << &s << std::endl;
	std::cout << "Address in memory of the stringPTR: " << stringPTR << std::endl;
	std::cout << "Address in memory of the stringREF: " << &stringREF << std::endl;
	std::cout << "String: " << s << std::endl;
	std::cout << "StringPTR: " << *stringPTR << std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;
	return 0;
}