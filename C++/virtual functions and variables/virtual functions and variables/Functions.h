#pragma once
#include <iostream>
#include <string>
#include "Adminmenu.h"
#include "Menus.h"
#include "Toolsmenu.h"

class Functions : public Menus 
{
public:
	void choose_menu();
	void choose_commands_amount();
	void print_MenuInformation();
};

