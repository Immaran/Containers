#include "Stack.h"
#include <conio.h>

Stack::Stack()
{
	this->value = 0;
	this->next = NULL;
}

bool Stack::Empty()
{
	if (this->next == NULL) return true;

	return false;
}

int Stack::Size()
{
	if (this->next == NULL) return 0;

	int i = 1;

	Stack* temp = this->next;

	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}

	return i;
}

Stack* Stack::Top()
{
	return this->next;
}

void Stack::Pop()
{
	if (this->next == NULL) return;

	Stack* temp = this->next;

	this->next = temp->next;

	delete(temp);
}

void Stack::Push(int value)
{
	Stack* temp = this->next;

	this->next = new Stack;
	this->next->value = value;
	this->next->next = temp;
}