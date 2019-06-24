#include <iostream>
#include <string>
#include <windows.h>


class Myself {
public:
	//default constructor, used if no name and/or age is given
	Myself() { name = "Unnamed", age = 16; }
private:
	std::string name;
	float age; 

	friend void changeInformation_Name(Myself& MyselfObj);
	friend void changeInformation_Age(Myself& MyselfObj);

	friend void setInformation(Myself& MyselfObj, std::string n, float a);
};



//prototypes
void input();

void changeInformation_Name(Myself& MyselfObj);
void changeInformation_Age(Myself& MyselfObj);

void setInformation(Myself& MyselfObj, std::string n, float a);

void clear();
void sleepAndExit();



int main()
{
	input();
	clear();
	sleepAndExit();

}


void input() {
	std::string n_input;
	float a_input;

	Myself M_FinalObj;

	std::cout << "Please give me your name!" << std::endl;
	std::cout << std::endl;
	std::cin >> n_input;
	std::cout << "\nNow please give me your age!" << std::endl;
	std::cout << std::endl;
	std::cin >> a_input;
	setInformation(M_FinalObj, n_input, a_input);
	changeInformation_Name(M_FinalObj);
	changeInformation_Age(M_FinalObj);
}

void changeInformation_Name(Myself& MyselfObj) {
	std::cout << "\nYour name is " << MyselfObj.name << " ";
}

void changeInformation_Age(Myself& MyselfObj) {
	std::cout << "and you are " << MyselfObj.age << " years old!" << std::endl;
}

void setInformation(Myself& MyselfObj, std::string n, float a) {
	MyselfObj.name = n;
	MyselfObj.age = a;
}

void clear() {
	Sleep(2000);
	std::cout << "\nWait... i leaked your privacy!" << std::endl;
	Sleep(1750);
	std::cout << "Clearing this text for security reasons!" << std::endl;
	Sleep(1000);
	std::cout << "\nClearing in 5..." << std::endl;
	Sleep(1000);
	std::cout << "\nClearing in 4..." << std::endl;
	Sleep(1000);
	std::cout << "\nClearing in 3..." << std::endl;
	Sleep(1000);
	std::cout << "\nClearing in 2..." << std::endl;
	Sleep(1000);
	std::cout << "\nClearing in 1..." << std::endl;
	Sleep(1000);
	std::cout << "\nClearing..." << std::endl;
	Sleep(3000);
	system("cls");

	std::cout << "Cleared" << std::endl;
	Sleep(2000);
	system("cls");
	std::cout << "Have a nice day :)" << std::endl;
}

void sleepAndExit() {
	Sleep(5000);
	exit(-1);
}


