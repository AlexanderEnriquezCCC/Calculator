#include "pch.h"
#include "UndoRedo.h"

UndoRedo::UndoRedo()
{
	
}

UndoRedo::~UndoRedo()
{
	//not really needed I think....
}

void UndoRedo::AddToUndo(float i)
{
	undoStack.push(i);
}

void UndoRedo::PrintUndo()
{
	if (undoStack.empty())
	{
		std::cout << "There are nothing to undo..." << std::endl;
	}
	else
	{
		std::cout << undoStack.top() << std::endl;
		redoStack.push(undoStack.top());
		undoStack.pop();
	}
}

void UndoRedo::AddToRedo(float i)
{
	redoStack.push(i);
}

void UndoRedo::PrintRedo()
{
	if (redoStack.empty())
	{
		std::cout << "There are nothing to redo..." << std::endl;
	}
	else
	{
		std::cout << undoStack.top() << std::endl;
		undoStack.push(redoStack.top());
		redoStack.pop();
	}
}