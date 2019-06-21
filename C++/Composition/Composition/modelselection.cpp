#include "modelselection.h"
#include "modellist.h"
#include <iostream>
#include <string>

modelselection::modelselection(std::string s, modellist a)
: selected_message(s), get_a(a)
{
}

void modelselection::print_selModel()
{
	std::cout << "You selected the model " << selected_message << " ! ";
	get_a.printAvailable();
}