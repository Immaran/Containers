#include <iostream>
#include <conio.h>

#include "Stack.h"
#include "Queue.h"
#include "PriorityQueue.h"

using namespace std;

int main()
{
	Stack *stack = new Stack();
	Queue *queue = new Queue();
	PriorityQueue *pqueue = new PriorityQueue();
	

	stack->Push(1);
	stack->Push(2);
	stack->Push(3);
	stack->Push(4);
	stack->Push(5);

	queue->Push(1);
	queue->Push(2);
	queue->Push(3);
	queue->Push(4);
	queue->Push(5);
	queue->Push(6);
	queue->Push(7);
	queue->Push(8);

	pqueue->Push(1);
	pqueue->Push(2);
	pqueue->Push(3);
	pqueue->Push(4);
	pqueue->Push(5);
	pqueue->Push(5);
	pqueue->Push(4);
	pqueue->Push(3);
	pqueue->Push(2);
	pqueue->Push(10);
	pqueue->Push(7);
	pqueue->Push(115);

	cout << "STACK (size: " << stack->Size() << ")\n\n";

	while (!stack->Empty())
	{
		cout << stack->Top()->value << "\n";
		stack->Pop();
	}

	cout << "\nQUEUE (size: " << queue->Size() << ")\n\n";

	while (!queue->Empty())
	{
		cout << queue->Front()->value << "\n";
		queue->Pop();
	}

	cout << "\n\nPRIORITY QUEUE (size: " << pqueue->Size() << ")\n\n";

	while (!pqueue->Empty())
	{
		cout << pqueue->Front()->value << "\n";
		pqueue->Pop();
	}

	cout << "\nSTACK (size: " << stack->Size() << ")\n";
	cout << "\nQUEUE (size: " << queue->Size() << ")\n";
	cout << "\nPRIORITY QUEUE (size: " << pqueue->Size() << ")\n";

	_getch();
}