// this is where you USE your blueprint

#include "stdafx.h"
#include "Calculator.h"
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	Calculator myCalc;
	int numA, numB;
	char op;
	char keepGoing = 'y';
	
	string userInputString;

	// do-while
	while (keepGoing == 'y') {

		/////////////////////////////////////////
		
		cout << "Enter your input: ";
		cin >> userInputString;

		// ASCII encoding
		//'0' = 48
		//'1' = 49
		//'2' = 50

		cout << "you entered: " << userInputString<<endl;
		//N X N X N X N X N......
		int result = 0;
		stack<char> inputStack;

		for (int i = userInputString.length()-1; i >= 0; i--) {
			char c = userInputString.at(i);
			cout << c << " ";
			inputStack.push(c);			
		}

		stack<char> postfix = myCalc.infixToPostfix(inputStack);
		//cout << "Result is :" << myCalc.solvePostfixNotation(postfix);
		
		cout << endl << " postfix stack looks like : ";
		while(!postfix.empty())
		{
			cout << postfix.top() << " ";
			postfix.pop();
		}

		numA = userInputString.at(0) - '0';
		op = userInputString.at(1);
		numB = userInputString.at(2) - '0';

		//cout << myCalc.calculate(numA, op, numB)<<endl;
		/////////////////////////////////////////

		cout <<endl<< "Do you want to continue (y/n)?";
		cin >> keepGoing;
	}
	

    return 0;
}

