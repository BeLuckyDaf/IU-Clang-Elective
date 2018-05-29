#ifndef LAB_1_QUEUE_H
#define LAB_1_QUEUE_H

#include <stdlib.h>
#include "bscds.h"

QUEUE * const create_queue();
void delete_queue(QUEUE* queue);
int queue_dequeue(QUEUE *queue);
void queue_enqueue(QUEUE *queue, int val);
int queue_peek(QUEUE* queue);

#endif //LAB_1_QUEUE_H
