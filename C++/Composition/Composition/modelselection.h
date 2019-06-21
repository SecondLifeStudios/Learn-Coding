#pragma once
#include "modellist.h"
#include <string>
class modelselection
{
public:
	modelselection(std::string s, modellist a);
	void print_selModel();
private:
	std::string selected_message;
	modellist get_a;
};

