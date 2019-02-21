#ifndef H_Queue
#define H_Queue

#include "QueueNode.h"
#include <vcruntime.h>

template <class T>
class Queue // valid for primitives (type T)
{
	QueueNode<T>* head = NULL;
	QueueNode<T>* tail = NULL;

public:
	void Enqueue(T item);
	T Dequeue();
	bool IsEmpty();
};

#endif // !H_Queue