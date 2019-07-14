#ifndef MINUS_H
#define MINUS_H

#include "subexpression.h"

class Minus : public SubExpression {
public:

	Minus(Expression* left, Expression* right) : SubExpression(left, right) {}

	int evaluate() override {
		return left->evaluate() - right->evaluate();
	}
};
#endif 
