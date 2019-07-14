#ifndef TIMES_H
#define TIMES_H

#include "subexpression.h"

class Times : public SubExpression {
public:

	Times(Expression* left, Expression* right) : SubExpression(left, right) {}

	int evaluate() override {
		return left->evaluate() * right->evaluate();
	}
};
#endif  