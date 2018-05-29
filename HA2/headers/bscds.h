#ifndef LAB_1_BSCDS_H
#define LAB_1_BSCDS_H

typedef struct Node NODE;
typedef struct Stack STACK;
typedef struct Queue QUEUE;

struct Node {
	struct Node *next, *previous;
	int value;
};

struct Stack {
	NODE* top;
	int size;
};

struct Queue {
	NODE *first, *last;
	int size;
};

#endif //LAB_1_BSCDS_H
