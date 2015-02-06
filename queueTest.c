#include "expr_assert.h"
#include "queueLib.h"

void test_createQueue_should_return_an_empty_queue () {
	Queue q;
	q = createQueue();
	assertEqual(q.list->count, 0);
	free(q);
}