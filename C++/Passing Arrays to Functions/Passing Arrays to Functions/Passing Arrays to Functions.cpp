#include <iostream>

void pm(int array[], int sizeofarray);    

int main() {

	int marc[3] = { 17, 95, 86 };                        // Deklariert und initialisiert Array 'marc'
	int not_marc[4] = { 83, 92, 3, 37 };

	
	std::cout << "Array 1:" << std::endl;

	pm(marc, 3);                                         /* Hier wird der Funktion 'pm', welche einen Array und einen Wert für die
														    Variable 'sizeofarray' benötigt einer der Arrays und dessen größe zugewiesen.
															(Muss nicht zwingend die tatsächliche größe des Arrays sein, kann auch
															niedriger sein, z.B. 'marc, 2'. Sogesagt die Maximalanzahl, bis zum wievielten
															Element die größe des Arrays ('sizeofarray'), welche die Funktion bekommen wird,
															sein soll.) */

	std::cout << "\nArray 2:" << std::endl;

	pm(not_marc, 2);

}

void pm(int array[], int sizeofarray) {                 // Funktion benötig einen Array und Variable 'sizeofarray'
	for (int l = 0; l < sizeofarray; l++) {             /* Loop wird solange wiederholt, bis l der größe des zugewiesenen Arrays
													       (also der Variable 'sizeofmarc') entspricht. */
		std::cout << array[l] << std::endl;             /* Der jetzige Wert von 'l'  respresäntiert das Element von 'marc', das ausgegeben 
													       werden soll.*/
	}
}
