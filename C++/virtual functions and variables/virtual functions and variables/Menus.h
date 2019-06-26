#pragma once
#include <iostream>
#include <string>

class Menus
{
public:
	virtual void show_command(){}
	void setTarget_menu(std::string tm) {
		target_menu = tm;
	}
	std::string getTarget_menu() {
		return target_menu;
	}
	void setAmount_of_commands(int x) {
		amount_of_commands = x;
	}
	int getAmount_of_commands() {
		return amount_of_commands;
	}
protected:
	int amount_of_commands;
	std::string target_menu;
};

