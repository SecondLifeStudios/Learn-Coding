#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

int test(int x = 1 + (rand()) % 5000, int y = 1 + (rand()) % 5000);          /* Falls sich für Case 2 entschieden wird, und somit kein
																			    User Input gegeben wird, werden die standartmäßig
																				gesetzten Werte für die Variablen genutzt und berechnet.
																				Hier: 1+(rand())%5000 -- (Zufallszahlen)*/

/*int test(){
	int a = 10;
	int b = 20;

	std::cin >> a;
	std::cin >> b;

	std::cout << a + b << std::endl;

	return a + b;

}*/

int main()
{
	srand(time(0));
	test();
}

int test(int x, int y) {
	int reqinput;
	std::cout << "1 = Give Input\n2 = Get precalculated" << std::endl;
	std::cin >> reqinput;
	switch (reqinput) {
	case 2:
		std::cout << x + y << std::endl;
		break;
		return x + y;
	case 1:
		std::cin >> x;
		std::cin >> y;
		std::cout << x + y << std::endl;
		break;
		return x + y;
	default:
		std::cout << "\nInvalid number!" << std::endl;
		break;
	}

	Sleep(2000);
	std::cout << "\nProgram finished!" << std::endl;
	Sleep(3000);
	exit(-1);
}

