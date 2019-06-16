#include "Sleep_And_Exit.h"
#include <Windows.h>

Sleep_And_Exit::Sleep_And_Exit() {
	Sleep(5000);
	exit(-1);
}

void Sleep_And_Exit::sleep_and_exit() {
	Sleep(5000);
	exit(-1);
}
