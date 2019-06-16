#include <iostream>

int main()
{

	int marc[3] = { 3, 6, 9 };                       // Initiliasiert Werte, die addiert werden sollen
	int result = 0;                                     /* Deklariert Variable, die das Ergebnis repräsentieren soll 
														(initialisiert mit 0, weil das Ergebnis noch 0 ist) */
	 
	for (int l = 0; l < 3; l++) {                       // Loop läuft 3 mal durch
		result += marc[l];                              /* Jedes mal, wenn der Loop durchläuft wird der aktuelle Wert von 'l' (also
														die Anzahl, wie oft der Loop schon durchgelaufen ist eingesetzt, um das in
														der Reihenfolge jeweilige Element des Arrays abzurufen. 
														z.B.: ist l = 1 (also schon 1 mal durchgelaufen, wird das erste Element des
														Arrays abgerufen. Dieses Element wird dann zum Gesamtergebnis 'result' addiert und
														'result' (result = jetziger Wert + dieses mal abgerufenes Element des Arrays) 
														'result' wär, wenn 'l' = 1 ist zuvor schon einmal durchgelaufen, da hier 0 das erste
														Element ist, hatte 'result' schon den Wert '3' (erstes Element 
														der Array initializer list) gespeichert. Dieses mal wird das zweite Element '6' 
														dazu addiert, also ist 'result' nun insgesamt 9 (3 + 6). Das geht immer so weiter,
														bis jedes Element (oder jedes, das im Loop abgerufen wird) dazu addiert wird.*/
		std::cout << result << std::endl;         
		std::cout << std::endl;
	}


}

