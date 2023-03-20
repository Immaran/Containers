#include "Queue.h"
#include <conio.h>

Queue::Queue()
{
	this->value = 0;
	this->next = NULL;
	this->last = NULL;
}

bool Queue::Empty()
{
	if (this->next == NULL) return true;

	return false;
}

int Queue::Size()
{
	if (this->next == NULL) return 0;

	int i = 1;

	Queue* temp = this->next;

	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}

	return i;
}

Queue* Queue::Front()
{
	return this->next;
}

Queue* Queue::Back()
{
	return this->last;
}

void Queue::Pop()
{
	if (this->next == NULL) return;

	Queue* temp = this->next;

	this->next = temp->next;

	delete(temp);

	if (this->next == NULL) this->last = NULL;
}

void Queue::Push(int value)
{
	if (this->next == NULL)
	{
		this->next = new Queue;
		this->next->value = value;
		this->last = this->next;
	}
	else
	{
		this->last->next = new Queue;
		this->last->next->value = value;
		this->last = this->last->next;
	}
}