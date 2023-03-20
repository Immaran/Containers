#pragma once

class Queue
{
protected:
	Queue* next;
	Queue* last;

public:
	int value;

	Queue();

	bool Empty();
	int Size();
	Queue* Front();
	Queue* Back();
	void Pop();
	virtual void Push(int value);
};