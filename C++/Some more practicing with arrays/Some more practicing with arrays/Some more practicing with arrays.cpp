#include <iostream>


// Tabelle, dioe multidimensionale Arrays anzeigt.

int main()
{

	float l_dividend[2][6] = { {1, 2, 3, 4, 5, 6}, {0.5, 1, 1.5, 2, 2.5, 3} };

	for (int cur_row = 0; cur_row < 2; cur_row++) {
		for (int cur_column = 0; cur_column < 6; cur_column++) {
			std::cout << l_dividend[cur_row][cur_column] << "  ";
		}

		std::cout << std::endl;
	}

}


