#pragma once

#include<stack>

// this is where the blueprint sits

class Calculator
{
private:
	int numA, numB;
	char op;

public:
	Calculator();
	~Calculator();

	int add(int, int);
	int subtract(int, int);

	int calculate(int, char, int);

	std::stack<char> infixToPostfix(std::stack<char> infix);

	double solvePostfixNotation(std::stack<char> postfix);
};

