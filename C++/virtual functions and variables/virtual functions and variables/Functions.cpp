#include "Functions.h"

void Functions::choose_menu() {

	std::string choose_menu;

	std::cout << "Select the menu you want to set the amount of maximum commands for!" << std::endl;
	choose_menu:
	std::cin >> choose_menu;

	target_menu = choose_menu;

	Adminmenu adminmenu;
	Toolsmenu toolsmenu;

	Menus* A_Menu = &adminmenu;
	Menus* T_Menu = &toolsmenu;

	A_Menu->setTarget_menu(choose_menu);
	T_Menu->setTarget_menu(choose_menu);

}

void Functions::choose_commands_amount() {

	Adminmenu adminmenu;
	Toolsmenu toolsmenu;

	Menus* A_Menu = &adminmenu;
	Menus* T_Menu = &toolsmenu;

	int commands_amount;

	std::cout << "Now select the amount of maximum commands available for the menu " << target_menu << "!" << std::endl;
	std::cin >> commands_amount;

	A_Menu->setAmount_of_commands(commands_amount);
	T_Menu->setAmount_of_commands(commands_amount);

}

void Functions::print_MenuInformation() {
	std::cout << "You decided to set the maxmimum amount of commands for the menu " << target_menu << " to " << amount_of_commands << "!" << std::endl;
}