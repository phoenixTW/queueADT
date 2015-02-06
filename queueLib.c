#include "queueLib.h"

Queue createQueue(void) {
	LinkedList *list = calloc(sizeof(LinkedList), 1);
	return (Queue) {list, list->head, list->tail};
}

int enqueue (Queue_ptr q, void* data) {
	int isAdded = add_to_list(q->list, create_node(data));
	return (isAdded < 1) ? -1 : q->list->count;	
}