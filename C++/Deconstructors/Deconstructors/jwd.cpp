#include "jwd.h"
#include <iostream>

jwd::jwd() {
	std::cout << "I'm the constructor!" << std::endl;
}

jwd::~jwd() {
	std::cout << "I'm the deconstructor!" << std::endl;
}