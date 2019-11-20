// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "UndoRedo.cpp"
#include <iostream>


//find out if Karl means to undo to "1+1 = 2", "1+1", or "2", Assume answer for now
//make method where opSwitcher can recall itself.
//maybe make a ShowAnswer method for vectors.

int main()
{
	UndoRedo* undoredo = new UndoRedo();
	float num1, num2;
	float answer;
	char undo, redo;
	char operation;
	
	while (1)
	{
		std::cout << "Choose an operator (+, -, *, /, u for undo, r for redo)" << std::endl;
		std::cin >> operation;
		std::cout << "Pick two numbers" << std::endl;
		std::cin >> num1;
		std::cin >> num2;
		switch (operation)
		{
		case '+':
			answer = num1 + num2;
			std::cout << answer << std::endl;
			break;

		case '-':
			answer = num1 - num2;
			std::cout << answer << std::endl;
			break;

		case '*':
			answer = num1 * num2;
			std::cout << answer << std::endl;
			break;

		case '/':
			answer = num1 / num2;
			std::cout << answer << std::endl;
			break;

		case 'r':

			break;

		case 'u':

			break;

		default:
			std::cout << "Please input a real value..." << std::endl;
			break;
		}
	}



    std::cout << "Hello World!\n"; 
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
