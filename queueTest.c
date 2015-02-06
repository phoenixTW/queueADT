#include "expr_assert.h"
#include "queueLib.h"

void test_createQueue_should_return_an_empty_queue () {
	Queue q;
	q = createQueue();
	assertEqual(q.list->count, 0);
	free(q);
}

void test_createQueue_should_return_an_empty_queue_with_null_front () {
	Queue q;
	q = createQueue();
	assertEqual(q.list->count, 0);
	assertEqual(q.list->head, q.front);
	assertEqual(q.front, 0x0);
	free(q);
}

void test_createQueue_should_return_an_empty_queue_with_null_rear () {
	Queue q;
	q = createQueue();
	assertEqual(q.list->count, 0);
	assertEqual(q.list->tail, q.rear);
	assertEqual(q.rear, 0x0);
	free(q);
}

void test_enqueue_should_return_1_for_enqueuing_a_single_data () {
	Queue q = createQueue();
	int data = 2;
	assertEqual(enqueue(&q, &data), 1);
	free(q);
}

void test_enqueue_should_return_2_for_enqueuing_two_data () {
	Queue q = createQueue();
	int data1 = 2, data2 = 4;
	assertEqual(enqueue(&q, &data1), 1);
	assertEqual(enqueue(&q, &data2), 2);
	free(q);
}