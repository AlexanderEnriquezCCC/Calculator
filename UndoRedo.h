#pragma once
#include <stack>
#include <iostream>
class UndoRedo
{
public:
	UndoRedo();
	~UndoRedo();
	std::stack<float> redoStack;
	std::stack<float> undoStack;

	void AddToUndo(float i);
	void PrintUndo();
	void AddToRedo(float i);
	void PrintRedo();
};

