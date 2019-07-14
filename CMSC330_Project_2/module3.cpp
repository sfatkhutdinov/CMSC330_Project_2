#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"

SymbolTable symbolTable;

void parseAssignments(istringstream& iss);

int main() {

	Expression* expression;
	char paren, comma;
	string fileName;
	ifstream infile;
	int counter;
	cout << "Enter file name: ";
	cin >> fileName;

	infile.open(fileName);
	if (!infile) {
		cout << "Error: Text file not found or improperly formatted.";
		return EXIT_FAILURE;
	}

	counter = 1;
	for (string line; getline(infile, line);) {

		symbolTable.reset();
		istringstream iss(line);

		iss >> paren;
		cout << "Expression #" << counter++ << ": " << line << endl;
		expression = SubExpression::parse(iss);
		iss >> comma;
		parseAssignments(iss);
		cout << "Value = " << expression->evaluate() << "\n" << endl;
	}

	infile.close();
	return 0;
}


void parseAssignments(istringstream& iss) {

	char assignop, delimiter;
	string variable;
	int value;

	do {
		variable = parseName(iss);
		iss >> ws >> assignop >> value >> delimiter;
		symbolTable.insert(variable, value);
	} while (delimiter == ',');
}