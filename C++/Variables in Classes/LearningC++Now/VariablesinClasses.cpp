// LearningC++Now.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//


#include <iostream>
#include <string>

class DIRString {
public:
	void setHW(std::string HWV) {      // weist setHW den String "HWV" zu
		HW = HWV;                      // initialisiert "HW" als oben erstellten String "HWV" -- (weist den oben erstellten String der unten erstellten Variable "HW" zu)
	}
	std::string getHW() {              // fragt die jetzige Definition von HW ab (initialisiert durch "setHW") -- "fragt den jetzigen Wert von "HW" ab (verändert/gesetzt durch die letzte Ausführung von"setHW")
		return HW;
	}
private:
	std::string HW;                    // 1. deklariert "HW"
};


int main()
{

	DIRString PHW;

	std::string a;
	std::cin >> a;
	PHW.setHW(a);

	std::cout << PHW.getHW();

	return 0;
}

// LEARNING PURPOSES


// test for myself to check if can remember to all tests
// < = less than
// > = bigger than
// <= less than or equals
//- / >= bigger than or equals
// -- Relational operators --

// == equals
// != not equals
// -- Equality operators --
