#include "FirstClass.h"
#include <iostream>
#include <Windows.h>

FirstClass::FirstClass() {
	std::cout << "TestOutput" << std::endl;
	std::cout << "bananas are great" << std::endl;
	std::cout << GetSystemMetrics(SM_CXSCREEN) << std::endl;
	std::cout << GetSystemMetrics(SM_CYSCREEN) <<std::endl;

	if (GetSystemMetrics(SM_CXSCREEN) < 1920 || GetSystemMetrics(SM_CYSCREEN) < 1080) {
		std::cout << "You are not running Full HD, seriously?" << std::endl;
	}
	else {
		std::cout << "Your screen resolution is atleast Full HD, nice boy!" << std::endl;
	}
}