#ifndef PLUS_H
#define PLUS_H

#include "subexpression.h"

class Plus : public SubExpression {
public:


	Plus(Expression* left, Expression* right) : SubExpression(left, right) {}

	int evaluate() override {
		return left->evaluate() + right->evaluate();
	}
};
#endif  