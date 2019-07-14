#ifndef NEGATION_H
#define NEGATION_H

#include "subexpression.h"

class Negation : public SubExpression {
public:

	Negation(Expression* left, Expression* right) : SubExpression(left, right) {}


	int evaluate() override {
		return !(left->evaluate());
	}
};
#endif  