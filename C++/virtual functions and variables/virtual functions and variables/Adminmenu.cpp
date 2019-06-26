#include "Adminmenu.h"

void Adminmenu::show_command() {
	std::cout << "There are " << amount_of_commands << " different commands available for the " << target_menu << std::endl;
}