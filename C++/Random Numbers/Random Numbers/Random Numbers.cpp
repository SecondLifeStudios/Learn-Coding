/*

Hier werden durch einige Funktionen und Tricks zufällige Zahlen generiert, was an dem Beispiel eines Random Number Generator genutzt wird.

* Zusatzinformation: Computer sind NIE in der Lage, vollständig wirklich ZUFÄLLIGE Zahlen zu generieren. Sie folgen immer einem
Algorithmus, welcher dahinter steckt. Durch mehrere Tricks wird dafür gesorgt, dass die "zufälligen" Dinge (z.B. Zahlen) immer anders sind
und uns daher "zufällig" erscheinen, jedoch nie wirklich zufällig generiert sind. 

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));

	for (int a = 0; a <= 25; a++) {
		std::cout << 1+(rand())%12 << std::endl;    /* %12 sorgt dafür, dass eine größere Zahl (z.B. 25.000 genommen wird, und durch 12 geteilt wird.
		                                             Anschließend wird der Restwert als Zufallszahl gelten. Mögliche Ergebnisse sind somit
													 0 - 11. Die Summe des Maximalwertes + der angegebene Additionswert vor '(rand())' wird der
													 neue Maximalwert sein. In dem Fall: 0-11 + 1 = 12 (12 = neuer maximale Wert). */
	}
}

