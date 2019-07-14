#ifndef LITERAL_H
#define LITERAL_H

#include "operand.h"

class Literal : public Operand {
public:

	Literal(int value) {
		this->value = value;
	}

	int evaluate() override {
		return value;
	}

private:
	int value;
};
#endif  