# queueADT
Queue util written in C

# Version 1.0

Queue createQueue(void)
-----------------------

Should create an empty queue along with 
	- List
	- Front
	- Rear


# Version 2.0

int enqueue(Queue_ptr, void*)
-----------------------------

Should insert a new node to the queue. The queue should be entered 
to the rear of the queue. The function will return count of the elements
into the queue.

# Version 3.0

void* dequeue(Queue_ptr)
-----------------------------

Should delete a node from the front and set the front to the next element of the deleted element.
When the queue will be empty then it will return null.


For retriving data of queue you have to do like following -
	*(datatype *)(*q.front)->data
	*(datatype *)(*q.rear)->data
