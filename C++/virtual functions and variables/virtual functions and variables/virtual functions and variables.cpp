/*



*/


#include <iostream>
#include <string>
#include "Adminmenu.h"
#include "Toolsmenu.h"
#include "Functions.h"

int main()
{

	Functions Function;

	Function.choose_menu();
	Function.choose_commands_amount();
	
	Function.print_MenuInformation();

}
