#include "Playermodelsmenu.h"

void Playermodelsmenu::show_TabsSortOrder() {
	if (tabs_sort_order <= 1) {
		std::cout << "You decided to keep everything in one tab!" << std::endl;
	}
	else {
		std::cout << "You decided to keep everything in " << tabs_sort_order << " different tabs!" << std::endl;
	}
}
