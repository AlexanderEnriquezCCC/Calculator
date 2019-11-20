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

}

void UndoRedo::AddToRedo(float i)
{
	redoStack.push(i);
}

void UndoRedo::PrintRedo()
{

}