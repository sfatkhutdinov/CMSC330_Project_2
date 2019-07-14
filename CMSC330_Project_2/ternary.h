#ifndef TERNARY_H
#define TERNARY_H

#include "expression.h"
#include "subexpression.h"

class Ternary : public SubExpression {
public:

	Ternary(Expression* left, Expression* right, Expression* condition)
		: SubExpression(left, right) {
		this->condition = condition;
	}


	int evaluate() override {
		return condition->evaluate() ? left->evaluate() : right->evaluate();
	}

private:
	Expression* condition;
};
#endif  