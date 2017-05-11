// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream> 
#include <cstdlib> 

using namespace std;

int main()
{
start:
	int a = 0;
	double value1;
	double value2;
	double result;
	char oOperator;


	cout << "Enter a number then a operator and then another number! e.g \n1+1, 1x1, 1/1, 1-1 (x + / -) \a \n";

	cin >> value1;
	cin >> oOperator;
	cin >> value2;

	switch (oOperator)
	{
	case 'x':
	case 'X':
	case '*':
	{
		result = value1 * value2;
		cout << result;
		break;
	}

	case '+':
	{
		result = value1 + value2;
		cout << result;
		break;
	}

	case '-':
	{
		result = value1 - value2;
		cout << result;
		break;
	}

	case '/':
	{
		result = value1 / value2;
		cout << result;
		break;
	}

	default:
	{
		cout << "!!!Was that a mathmatical symbol?!!!";
		break;
	}
	}
	cout << "\n";
	cout << "try again press 1 or quit 2...and enter";
	cin >> a;
	if (a == 1)
		goto start;
	if (a == 2)
	{
		cout << "thank you\n";
		system("PAUSE");
	}
	return 0;
}
