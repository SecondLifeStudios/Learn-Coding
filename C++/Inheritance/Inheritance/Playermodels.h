#pragma once
#include <iostream>
#include <string>
class Playermodels
{
public:
	Playermodels();
	void printInformation();

	//Accessors
	void setSelection(std::string selection_setter);
	std::string getSelection();

protected:
	// Variables
	std::string selection;
	int available_models = 22;
};

