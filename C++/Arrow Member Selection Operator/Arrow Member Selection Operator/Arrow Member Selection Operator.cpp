// First file in my github respority

#include <iostream>
#include "Practicing.h"

int main()
{
	      
	Practicing Output;                                          // Objekt 'Output'
	Practicing* Output_P = &Output;                             // Pointer zeigt auf die Speicheradresse (Memory Adress) des Objektes 'Output'

	std::cout << "Without pointer:" << std::endl;
	Output.rText();                                             // Es wird vom Objekt aus auf die Funktion zugegriffen.

	std::cout << std::endl;

	std::cout << "With pointer:" << std::endl;
	Output_P->rText();                                          /* Der 'Arrow Member Selection Operator' wird benötigt, um von dem Pointer aus auf
																   eine Funktion einer Klasse zuzugreifen, anstelle von dem Objektes aus. 
																   Es wird vom Pointer aus, welcher auf die Speicheradresse des Objektes 'Output' zeigt auf 
																   die Funktion zugegriffen. Achtung: Es wird nur auf die Speicheradresse des Objekets zugegriffen,
																   nicht auf die der Funktion. */

}

