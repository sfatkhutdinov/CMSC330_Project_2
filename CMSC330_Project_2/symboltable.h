#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

class SymbolTable {
public:

	SymbolTable() {}

	void insert(string variable, int value);


	int lookUp(string variable) const;


	void reset();

private:

	struct Symbol {

		Symbol(string variable, int value) {
			this->variable = variable;
			this->value = value;
		}

		string variable;
		int value;
	};

	vector<Symbol> elements;
};
#endif  