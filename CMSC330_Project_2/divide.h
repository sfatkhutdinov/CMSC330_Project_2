#ifndef DIVIDE_H
#define DIVIDE_H

#include "subexpression.h"

class Divide : public SubExpression {
public:

	Divide(Expression* left, Expression* right) : SubExpression(left, right) {}


	int evaluate() override {
		return left->evaluate() / right->evaluate();
	}
};
#endif  