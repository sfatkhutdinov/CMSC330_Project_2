#ifndef AND_H
#define AND_H

#include "subexpression.h"

class And : public SubExpression {
public:

	And(Expression* left, Expression* right) : SubExpression(left, right) {}

	int evaluate() override {
		return left->evaluate() && right->evaluate();
	}
};
#endif