#include <iostream>

void value(int v);
void reference(int* r);


int main() {

	int var1 = 50;                            /* Erstellt 'var1' mit ursprünglichen Wert '50'. */
	int var2 = 75;                            /* Erstellt 'var2' mit ursprünglichen Wert '75'. */

	value(var1);                              /* Überreicht den Wert von 'var1' an Funktion 'value'. Der ursprüngliche Wert wird jedoch nicht verändert. (Erklärung 
											     unten bei der Funktion zu finden) */

	reference(&var2);                         /* Überreicht den Wert (die Speicheradresse) von 'var2' an Funktion 'reference'. Der ursprüngliche Wert der Variable
											     wird ebenfalls bei Ausführung  geändert. (Erklärung unten bei der Funktion zu finden) */

	std::cout << var1 << std::endl;
	std::cout << var2 << std::endl;

}


void value(int v) {                           /* Erstellt Funktion mit Parameter 'int v' v wird mit dem Wert 'v' initialisiert. Die später eingesetzte Variable 
										         für Parameter 'int v' wird 'kopiert', diese Kopie wird dann auf den Wert 25 gesetzt, die ursprünglich 
											     initialisierte Variable behält jedoch den ursprünglichen Wert '50'. */
	v = 25;
}

void reference(int* r) {                      /* Erstellt Funktion mit Parameter 'int *r', also mit einem Pointer, der nicht nur eine Kopie ist, sondern eine direkte
										         Referenz auf die Adresse der Variable. D.h. direkten Zugriff auf die Variable hat, und diese direkt verändern kann.
											     Somit wird nicht nur eine Kopie der Variable erstellt und ein neuer Wert dieser Kopie zugewiesen, sondern
												 es wird eine Referenz auf die ursprüngliche Variable erstellt, wodurch der nun zugewiesene Wert direkt der
												 ursprünglichen Variable zugewiesen wird und den Wert dieser direkt verändert. */
	*r = 42;
}

