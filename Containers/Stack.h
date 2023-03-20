#pragma once

class Stack
{
private:
	Stack *next;

public:
	int value;

	Stack();

	bool Empty();
	int Size();
	Stack* Top();
	void Pop();
	void Push(int value);
};