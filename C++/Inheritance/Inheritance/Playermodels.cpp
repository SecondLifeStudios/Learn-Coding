#include "Playermodels.h"

Playermodels::Playermodels() {
	selection = "NO MODEL SELECTED"; 
}

void Playermodels::printInformation() { 

	std::cout << "You selected the playermodel " << selection << "! There are " << available_models - 1 << " more models available!" << std::endl;

}

void Playermodels::setSelection(std::string selection_setter) {
	selection = selection_setter;
}

std::string Playermodels::getSelection() {
	return selection;
}
