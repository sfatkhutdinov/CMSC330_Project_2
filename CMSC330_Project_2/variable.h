#ifndef VARIABLE_H
#define VARIABLE_H

#include "operand.h"

class Variable : public Operand {
public:

	Variable(string name) {
		this->name = name;
	}

	int evaluate() override;

private:
	string name;
};
#endif  