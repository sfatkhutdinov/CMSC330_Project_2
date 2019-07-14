#ifndef OR_H
#define OR_H

#include "subexpression.h"


class Or : public SubExpression {
public:


	Or(Expression* left, Expression* right) : SubExpression(left, right) {}

	int evaluate() override {
		return left->evaluate() || right->evaluate();
	}
};
#endif  