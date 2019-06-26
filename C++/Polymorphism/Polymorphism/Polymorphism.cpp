/*

Durch "Polymorphism" können zwei gleichnamige Funktionen  bei Call durch 
verschiedene Objekte (Klassen) derselben Variable verschiedene Werte zuweisen.

*/

#include <iostream>
#include "Menus.h"
#include "Toolsmenu.h"
#include "Playermodelsmenu.h"



int main() {

	Toolsmenu toolsmenu;
	Playermodelsmenu playermodelsmenu;

	Menus* T_Menu = &toolsmenu;
	Menus* P_Menu = &playermodelsmenu;

	T_Menu->setTabs_sort_order(1);
	P_Menu->setTabs_sort_order(5);

	toolsmenu.show_TabsSortOrder();
	playermodelsmenu.show_TabsSortOrder();
}

