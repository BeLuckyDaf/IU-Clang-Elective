#include <stdio.h>
#include "headers/bds.h"

int main() {
	QUEUE * const queue = create_queue();
	STACK * const stack = create_stack();

	/* let's add something */
	queue_enqueue(queue, 10);
	queue_enqueue(queue, 15);
	stack_put(stack, 10);
	stack_put(stack, 15);

	/* now, let's get it out */
	int a = queue_dequeue(queue);
	int b = queue_dequeue(queue);
	int c = stack_pull(stack);
	int d = stack_pull(stack);

	printf("QUEUE:\n\ta: %d\n\tb: %d\nSTACK:\n\tc: %d\n\td: %d", a, b, c, d);

	/* they are dynamically stored objects, so don't forget to delete them
	 * it's like deleting 'new' objects in C++ */
	delete_stack(stack);
	delete_queue(queue);

	return 0;
}