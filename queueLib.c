#include "queueLib.h"

Queue createQueue(void) {
	LinkedList *list = calloc(sizeof(LinkedList), 1);;
	return (Queue) {list, &list->head, &list->tail};
}