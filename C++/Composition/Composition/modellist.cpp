#include "modellist.h"
#include <iostream>

modellist::modellist(int a) {
	available = a;
}

void modellist::printAvailable() {
	std::cout << "There are still " << available << " models left to explore! " << std::endl;
}