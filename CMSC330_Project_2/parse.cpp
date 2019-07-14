#include <cctype>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#include "parse.h"

string parseName(istringstream& iss) {

	char alnum;
	string name;
	name = "";

	iss >> ws;
	while (isalnum(iss.peek())) {
		iss >> alnum;
		name += alnum;
	}

	return name;
}