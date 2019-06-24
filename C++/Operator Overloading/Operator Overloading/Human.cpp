#include "Human.h"
#include <iostream>

Human::Human() {

}

Human::Human(int x) {
	m_age = x;
}

Human Human::operator+(Human N_HObj) {
	Human F_HumanObj;
	F_HumanObj.m_age = m_age + N_HObj.m_age;
	return(F_HumanObj);
}