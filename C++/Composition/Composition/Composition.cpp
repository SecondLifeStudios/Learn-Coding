#include <iostream>
#include "modellist.h"
#include "modelselection.h"

int main()
{
    
	modellist available(22);

	modelselection showSelectedModel("Barney Calhoun", available);
	showSelectedModel.print_selModel();

}

