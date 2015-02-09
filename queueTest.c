#include "expr_assert.h"
#include "queueLib.h"

Queue q;

void setup () {
	q = createQueue();
}

void teardown() {
	free(q);
}

void test_createQueue_should_return_an_empty_queue () {
	assertEqual(q.list->count, 0);
}

void test_createQueue_should_return_an_empty_queue_with_null_front () {
	assertEqual(q.list->count, 0);
	assertEqual(0x0, (*q.front));
	assertEqual((*q.front), 0x0);
}

// void test_createQueue_should_return_an_empty_queue_with_null_rear () {
// 	assertEqual(q.list->count, 0);
// 	assertEqual(q.list->tail, q.rear);
// 	assertEqual(q.rear, 0x0);
// }

// void test_enqueue_should_return_1_for_enqueuing_a_single_data () {
// 	int data = 2;
// 	assertEqual(enqueue(&q, &data), 1);
// }

// void test_enqueue_should_return_2_for_enqueuing_two_data () {
// 	int data1 = 2, data2 = 4;
// 	assertEqual(enqueue(&q, &data1), 1);
// 	assertEqual(enqueue(&q, &data2), 2);
// 	assertEqual(*(int*)((*q.front)->data), 2);
// 	assertEqual(*(int*)(q.rear->data), 4);
// }

// void test_enqueue_should_return_2_for_enqueuing_two_data_in_char_type () {
// 	char data1 = 'a', data2 = 'b';
// 	assertEqual(enqueue(&q, &data1), 1);
// 	assertEqual(enqueue(&q, &data2), 2);
// 	assertEqual(*(char*)((*q.front)->data), 'a');
// 	assertEqual(*(char*)(q.rear->data), 'b');
// }

// void test_enqueue_should_return_2_for_enqueuing_two_data_in_float_type () {
// 	float data1 = 1.01, data2 = 1.02;
// 	assertEqual(enqueue(&q, &data1), 1);
// 	assertEqual(enqueue(&q, &data2), 2);
// 	assertEqual(*(float*)(q->front->data), 1.01);
// 	assertEqual(*(float*)(q->rear->data), 1.02);
// }

void test_enqueue_should_return_2_for_enqueuing_two_data_in_String_type () {
	String data1 = "Kaustav", data2 = "chakraborty";
	assertEqual(enqueue(&q, &data1), 1);
	assertEqual(enqueue(&q, &data2), 2);
	assertEqual(*(String*)((*(q.front))->data), "Kaustav");
	assertEqual(*(String*)((*(q.rear))->data), "chakraborty");
}

// void test_dequeue_should_return_2_for_deleting_an_element_in_int_type () {
// 	int data1 = 2, data2 = 4;
// 	assertEqual(enqueue(&q, &data1), 1);
// 	assertEqual(enqueue(&q, &data2), 2);
// 	assertEqual(*(int*)dequeue(&q), 2);	
// 	// assertEqual(*(int*)((*q.front)->data), 4);
// }