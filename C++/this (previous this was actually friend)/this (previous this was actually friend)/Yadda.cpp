#include "Yadda.h"
#include <iostream>

Yadda::Yadda(int i) {
	age = i;
}

                                                       // 'Y_Obj' ist das Objekt, welches in dem Fall den Wert für "age" initialisiert.
void Yadda::printAge() {
	std::cout << age << std::endl;                     // Das Programm "vermutet" dass mit dem Objekt 'Y_Obj' gearbeitet wird.
	std::cout << this->age << std::endl;               /* Hier wird explizit auf das Objekt 'Y_Obj' verwiesen, das Programm weiß 
													      somit genau, dass mit diesem Objekt gearbeitet wird. */
	std::cout << (*this).age << std::endl;             /* Hier wird explizit auf die Speicheradresse des Objektes 'Y_Obj' verwiesen bzw.
													      gezeigt. */
}
