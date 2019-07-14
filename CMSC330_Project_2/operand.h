#ifndef OPERAND_H
#define OPERAND_H

#include "expression.h"

class Operand : public Expression {
public:


	static Expression* parse(istringstream& iss);
};
#endif 