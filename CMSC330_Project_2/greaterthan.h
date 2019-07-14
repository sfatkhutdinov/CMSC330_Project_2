#ifndef GREATERTHAN_H
#define GREATERTHAN_H

#include "subexpression.h"

class GreaterThan : public SubExpression {
public:

	GreaterThan(Expression* left, Expression* right)
		: SubExpression(left, right) {}

	int evaluate() override {
		return left->evaluate() > right->evaluate();
	}
};
#endif  