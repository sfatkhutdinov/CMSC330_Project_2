#ifndef LESSTHAN_H
#define LESSTHAN_H

#include "subexpression.h"

class LessThan : public SubExpression {
public:

	LessThan(Expression* left, Expression* right) : SubExpression(left, right) {}

	int evaluate() override {
		return left->evaluate() < right->evaluate();
	}
};
#endif 