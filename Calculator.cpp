// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "UndoRedo.h"
#include <iostream>


//find out if Karl means to undo to "1+1 = 2", "1+1", or "2", Assume answer for now
//make method where opSwitcher can recall itself.
//maybe make a ShowAnswer method for vectors.
	float num1, num2;
	float answer;
	char operation;
	int whileLoop = 1;
int main()
{
	UndoRedo* undoredo = new UndoRedo();

	
	while (whileLoop == 1)
	{
		std::cout << "Choose an operator (+, -, *, /, u for undo, r for redo, e to end)" << std::endl;
		std::cin >> operation;
		//std::cout << "Pick two numbers" << std::endl;
		//std::cin >> num1;
		//std::cin >> num2;
		switch (operation)
		{
		case '+':
			std::cout << "Pick two numbers" << std::endl;
			std::cin >> num1;
			std::cin >> num2;
			answer = num1 + num2;
			std::cout << answer << std::endl;
			undoredo->AddToUndo(answer);
			break;

		case '-':
			std::cout << "Pick two numbers" << std::endl;
			std::cin >> num1;
			std::cin >> num2;
			answer = num1 - num2;
			std::cout << answer << std::endl;
			undoredo->AddToUndo(answer);
			break;

		case '*':
			std::cout << "Pick two numbers" << std::endl;
			std::cin >> num1;
			std::cin >> num2;
			answer = num1*num2;
			std::cout << answer << std::endl;
			undoredo->AddToUndo(answer);
			break;

		case '/':
			std::cout << "Pick two numbers" << std::endl;
			std::cin >> num1;
			std::cin >> num2;
			answer = num1 / num2;
			std::cout << answer << std::endl;
			undoredo->AddToUndo(answer);
			break;

		case 'r':
			undoredo->PrintRedo();
			break;

		case 'u':
			undoredo->PrintUndo();
			break;

		case 'e':
			whileLoop = 0;
			break;

		default:
			std::cout << "Please input a real value..." << std::endl;
			break;
		}
	}
	delete(undoredo);
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
