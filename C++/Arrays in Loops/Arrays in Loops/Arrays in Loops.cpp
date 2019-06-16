#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

	srand(time(0));

	int marc[20];

	for (int set_array = 0; set_array < 20; set_array++) {
		marc[set_array] = 100;                                  // Jeder der 20 Werte des Arrays wird 
	}

	std::cout << marc[10];

}
