#include "prct.h"
#include <iostream>

int main()
{

	const prct Output;                                      /* Hinweis: Konstante Objekte können nicht auf inkonstante Funktionen zugreifen.
															   Inkonstante Objekte können aber jedoch auf konstante Funktionen zugreifen. */

	Output.dont_forget_public();

}

