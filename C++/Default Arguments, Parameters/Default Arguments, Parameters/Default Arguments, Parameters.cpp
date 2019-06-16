#include <iostream>
#include <cstdlib>
#include <ctime>

/*

Deklaration (Declaration) = "Erstellung" einer Variable
                            Bsp.: int a;

Initialisation (Initialisation) = Weist der Variable einen (neuen) Wert zu

*/


int calc(int a = 1, int b = 1);             /* Initialisiert "standart" Werte, welche benutzt werden, falls keiner bei Ausführung der 
											Funktion Eingegeben wird */

int main()
{
	srand(time(0));
	std::cout << calc() << std::endl;
}

int calc(int a, int b) {                   /* Parameter einer Funktion (hier: int a, int b) deklariereren Variablen, mit denen die Funktion 
										   arbeiten wird. Die Variablen können in der Funktion oder später bei der Ausführung 
										   initialisiert werden. */
	return a + b;
}
