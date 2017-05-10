/// how the blue porint comes together

#include "stdafx.h"
#include "Calculator.h"
#include <iostream>
#include <math.h>
#include <cctype>

Calculator::Calculator()
{
}


Calculator::~Calculator()
{
}

int Calculator::add(int a, int b)
{
	return a + b;
}

int Calculator::subtract(int a, int b)
{
	return a-b;
}

int Calculator::calculate(int a, char op, int b)
{
	int result = 0;

	switch (op)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	default:
		break;
	}

	return result;
}

std::stack<char> Calculator::infixToPostfix(std::stack<char> infix)
{
	std::stack<char> postfix;
	std::stack<char> opStack;

	while(!infix.empty())
	{
		char c = infix.top();
		std::cout << "processing: " << c << std::endl;

		if (std::isdigit(c)) 
		{
			postfix.push(c);
		}
		else 
		{
			if (!opStack.empty())
			{
				char opTop = opStack.top();

				if ((opTop == '+' || opTop == '-') && (c == '/' || c == '*'))
				{
					opStack.push(c);
				}
				else
				{
					while (!opStack.empty())
					{
						postfix.push(opStack.top());
						opStack.pop();
					}
					opStack.push(c);
				}
			}
			else 
			{
				opStack.push(c);
			}
		}		
		infix.pop();
	}

	while (!postfix.empty()) {
		opStack.push(postfix.top());
		postfix.pop();
	}
	return opStack;
}

double Calculator::solvePostfixNotation(std::stack<char> postfix)
{
	return 0.0;
}
