#ifndef EQUALS_H
#define EQUALS_H

#include "subexpression.h"

class Equals : public SubExpression {
public:

	Equals(Expression* left, Expression* right) : SubExpression(left, right) {}

	int evaluate() override {
		return left->evaluate() == right->evaluate();
	}
};
#endif 