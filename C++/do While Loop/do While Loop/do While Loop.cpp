/*

do-While Loops:
Eine Art andere While-Loops, die zuerst den Code wiedergeben und anschließend den Test ausführen

Nützlich, wenn der Code vor dem Test mindestens 1 mal ausgeführt werden soll, unabhängig davon, ob dieser
die Bedindungen des Tests erfüllt oder nicht.

do {
std::cout << "Test";   // Statement wird ausgefüht, bevor Bedingung getestet wird 
}while(a < 10);       // Bedingung (Statement wird mind. 1 mal ausgeführt, egal ob erfüllt oder nicht)


switch Statements:
Überprüfen einen gegebenen Wert (die Bedingung) auf mehrere zutreffende Fälle und führt je Fall einen
anderen Code aus. Wenn keiner zutrifft, wird der Code in 'default' ausgeführt.

Mit anderen Worten die korrekte und einfachere sowie sauberere Art, mehrere if-statements, die das 
gleiche tun sollen zu schreiben.


int a;
std::cin >> a;

switch(a) {                               // Überprüft die Eingabe vom User für 'a'
case 3:                                   // Wenn die Eingabe = 3 ist, wird der Code in diesem case ausgeführt.
std::cout << "Hi.";                       
break;                                    // Verhindert die Abfrage nach weiteren zutreffenden Fällen, nach dem dieser Fall ausgeführt wurde (zutreffend war).
case 13:
std::cout << "Hi again, this time your given number equals to 13!";
break;

*/


/*

Dieses Programm führt das switch-statement solange aus, bis '-1' vom User eingegebenen wird.

*/



#include "Sleep_And_Exit.h"
#include <iostream>
#include <Windows.h>

int main()
{

	int tv;

	std::cout << "Hello!\nThis program will ask you to type in a number. You can type in any number you want, but 3 numbers in the range of 1 - 30 are special ones. If you type in one of these, i'll tell you! In case you don't hit any special number, i'll tell you too!This whole thing will repeat until you type in '-1'. This will stop the program!\n\nNow, enjoy guessing! ( ಠ ͜ʖಠ)" << std::endl;
	std::cout << std::endl;
	std::cout << "Type in your first number, please!" << std::endl;

	do {

		std::cin >> tv;

		switch (tv) {
		case 6:
			std::cout << "\nYour given number was 6, and it's a special one!" << std::endl;
			Sleep_And_Exit();
		case 18:
			std::cout << "\nSpecial one! Are you 18, or why did you type in this number?" << std::endl;
			Sleep_And_Exit();
		case 30:
			std::cout << "\nOh come on, that's not fair, i told you already that this might be a special number!" << std::endl;
			Sleep_And_Exit();
		case 1920:
			std::cout << "\nUhm, you are talking about Full-HD?" << std::endl;
			switch (GetSystemMetrics(SM_CXSCREEN)) {
			case 1920:
				std::cout << "\nYou screen width equals to 1920! Congratiulations!" << std::endl;
				Sleep_And_Exit();
			case 2560:
				std::cout << "\nYour screen witdh equals to 2560! WQHD i've heard?" << std::endl;
				Sleep_And_Exit();
			default:
				std::cout << "\nOh boy, your screen width is not atleast 1920! You should fix that!" << std::endl;
				Sleep_And_Exit();
			}
			break;
		default:
			std::cout << "\nNo special number, but " << tv << " is also a beautiful number!" << std::endl;
		}
	} while (tv != -1);

}