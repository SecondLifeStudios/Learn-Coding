/*

Inheritance:
Eine Klasse "erbt" Variablen und Funktionen aus einer anderen Klasse.
Die Klasse, die etwas erbt nennt man "derived class" und die Klasse, von der die geerbten Variablen und Funktionen kommen, nennt man
"base class"

*/

#include <iostream>
#include "Playermodels.h"
#include "Menu_Playermodels.h"

int main()
{
	std::string s;
	std::cin >> s;

	Playermodels PMObj;
	Menu_Playermodels menu_PMObj;

	menu_PMObj.setSelection(s);
	menu_PMObj.printInformation();


	PMObj.printInformation();
}

