#include <iostream>
#include <sstream>

using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "negation.h"
#include "ternary.h"
#include "equals.h"
#include "and.h"
#include "or.h"
#include "greaterthan.h"
#include "lessthan.h"

SubExpression::SubExpression(Expression* left, Expression* right) {
	this->left = left;
	this->right = right;
}

Expression* SubExpression::parse(istringstream& iss) {

	// Declarations
	Expression* left;
	Expression* right;
	Expression* condition;
	char operation, paren;

	
	left = Operand::parse(iss);

	
	iss >> operation;

	switch (operation) {
	case '!':
		iss >> paren; 
		right = NULL; 
		return new Negation(left, right);
	case ':':
		right = Operand::parse(iss);          
		iss >> paren;                         
		condition = Operand::parse(iss);      
		iss >> paren;                         
		return new Ternary(left, right, condition);
	default:
		right = Operand::parse(iss);          
		iss >> paren;                         
		return SubExpression::determineType(operation, left, right);
	}
}

Expression* SubExpression::determineType(char operation, Expression* left,
	Expression* right) {

	switch (operation) {
	case '&':
		return new And(left, right);
	case '/':
		return new Divide(left, right);
	case '=':
		return new Equals(left, right);
	case '>':
		return new GreaterThan(left, right);
	case '<':
		return new LessThan(left, right);
	case '-':
		return new Minus(left, right);
	case '|':
		return new Or(left, right);
	case '+':
		return new Plus(left, right);
	case '*':
		return new Times(left, right);
	default:
		return 0; 
	}
}