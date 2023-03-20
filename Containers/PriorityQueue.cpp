#include "PriorityQueue.h"
#include "Queue.h"
#include <conio.h>

void PriorityQueue::Push(int value)
{
	if (this->next == NULL)
	{
		this->next = new PriorityQueue;
		this->next->value = value;
		this->last = this->next;
	}
	else
	{
		PriorityQueue* temp = this;

		while (temp->next != NULL && temp->next->value < value) temp = (PriorityQueue*)temp->next;

		PriorityQueue* temp2 = (PriorityQueue*)temp->next;

		temp->next = new PriorityQueue;
		temp->next->value = value;
		((PriorityQueue*)temp->next)->next = temp2;
		
	}
}