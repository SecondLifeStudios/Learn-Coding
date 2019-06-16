/* 

Hier habe ich mit While Loops rumexperementiert, anhand des folgenden Beispiels das ich gelernt habe sowie Kombinationen mit 
schon vorhandenem Wissen:

Der Loop kalkuliert das durchschnittliche Alter der Personen auf Basis der Anzahl der eingetragenen Personen.

int age;                     -- Alter für jede Einzelne Person
int ageTotal = 0;            -- Addiert alle Alter miteinander (Startwert = 0, da z.B. nichts + 1 = nichts wäre, 0 + 1 wäre 1)
int peopleEntered = 0;       -- Anzahl der eingetragenen Personen (+1 pro eingetragenes Alter)

std::cin >> age;             -- Eingabe des ersten Alters

while(age != -1) {           -- Solange der Wert age (Wert jeder Eingabe) nicht '-1' beträgt, wiederholt sich der Loop. Trägt man '-1' ein, 
ageTotal = ageTotal + age;   -- Addiert den zuletzt eingegebenen Wert zur gespeicherten Summe aller bis jetzt eingegebenen Werte.
peopleEntered++;             -- Erhöht die Anzahl der eingebebenen Personen nach jedem eingegebenen Wert.

std::cout << "Age registered! Type in one more age or type in '-1' to stop and calculate the average age of each person!" << std::endl;
std::cin >> age;

}

std::cout << ageTotal / peopleEntered;           -- Gibt das Ergebnis aus

 

*/

#include <iostream>

int main() 
{

	printf("This program is going to calculate your sniper aim score.\nYou will have to type in the amount of shots you hit for each match!\n\nIf you typed in every match, type in '-1' to calculate!\n\n");

	int hitsmatch;
	int hitstotal = 0;
	int matchsplayed = 0;

	std::cin >> hitsmatch;

	while (hitsmatch != -1) {
		hitstotal = hitstotal + hitsmatch;
		matchsplayed++;

		if (hitstotal > 100) {
			std::cout << "cheater" << std::endl;
			break;
			system("pause");
		}

		if (hitstotal == 100) {
			std::cout << "You reached a score of 100!" << std::endl;
			std::cout << "You are defeneteley a master, you can't reach more than 100, so your calculation is done!" << std::endl;
			break;
			system("pause");
		}

		std::cout << "Match registered!\nHow often did you hit in the next match?\n";
		std::cin >> hitsmatch;
	}


	int result = hitstotal / matchsplayed;

	if (result > 100) {
		std::cout << "Your result would be over 100 out of 100 points, which is impossible!\nSo stop lying Ramirez :)" << std::endl;
		std::cout << "\nIt would be at " << result << " points out of 100 possible points!" << std::endl;
	}
	else {
		std::cout << "Your average precision is rated " << result << " points out of 100 points!" <<  std::endl;
	}

	if (result < 10) {
		std::cout << "You suck big dick really" << std::endl;
	}

	system("pause");

	return 0;
}

