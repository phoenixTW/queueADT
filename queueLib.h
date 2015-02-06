#include "linkedList.h"

// #ifdef queueLib_h_
// #define queueLib_h_

typedef struct queue Queue;

struct queue {
	LinkedList *list;
	Node_ptr front;
	Node_ptr rear;
};

Queue createQueue(void);

// #endif