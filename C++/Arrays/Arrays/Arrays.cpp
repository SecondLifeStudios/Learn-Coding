/*

Arrays sind Variablen, die mehrere Werte beinhalten können.

int bsp[3] = {23, 45, 70};       -- "[3]" bedeutet, dass "int bsp" 3 Werte haben wird. Anschließend werden diese nach der Reihenfolge
                                     aufgelistet (Array initializer list); (jeder einzelne Wert heißt "element")

std::cout << bsp[2];             -- "[2]" ist der "Index", welcher angibt, welches Element der Array intizializer list
                                    abgerufen werden soll. Der Array Index wird bei 0 angefangen zu zählen, d.h. "[0]" würde eigentlich
									das erste Element abrufen (hier: 23). Somit würde "[2]" das dritte Element (hier: 70) abrufen.

*/



#include <iostream>

int main() {
	int first_array[3] = { 23, 45, 79 };

	std::cout << first_array[2];
}
