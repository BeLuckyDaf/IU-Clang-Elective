#include "../headers/queue.h"
#include "../headers/node.h"
#include <stdlib.h>

QUEUE * const create_queue(){
	QUEUE* queue = (QUEUE*) malloc(sizeof(QUEUE));

	queue->size = 0;
	queue->first = NULL;
	queue->last = NULL;

	return queue;
}

void delete_queue(QUEUE* queue) {
	for (int i = queue->size; i > 0; i--) queue_dequeue(queue);

	free(queue);
}

int queue_dequeue(QUEUE *queue) {
	NODE* node = queue->first;
	int val = node->value;
	queue->first = node->next;
	if (queue->first != NULL) queue->first->previous = NULL;
	else queue->last = NULL;
	free(node);
	queue->size--;
	return val;
}

void queue_enqueue(QUEUE *queue, int val) {
	NODE* node = create_node();
	if (queue->last != NULL) queue->last = queue->last->next = node;
	else queue->last = queue->first = node;
	node->previous = (queue->last == queue->first) ? NULL : queue->last;
	node->next = NULL;
	node->value = val;
	queue->size++;
}

int queue_peek(QUEUE* queue) {
	return (queue->first != NULL) ? queue->first->value : -1;
}


