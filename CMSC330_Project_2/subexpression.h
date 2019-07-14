#ifndef SUBEXPRESSION_H
#define SUBEXPRESSION_H

#include "expression.h"

class SubExpression : public Expression {
public:

	SubExpression(Expression* left, Expression* right);


	static Expression* parse(istringstream& iss);

protected:
	Expression* left;
	Expression* right;

private:


	static Expression* determineType(char operation, Expression* left,
		Expression* right);
};
#endif  