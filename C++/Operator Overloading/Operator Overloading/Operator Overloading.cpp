#include <iostream>
#include "Human.h"

int main()
{

	Human initial_age(16);
	Human age_to_add(4);
	Human final_age;

	final_age = initial_age + age_to_add;

	std::cout << final_age.m_age << std::endl;


}

