#include "../headers/bscds.h"
#include "../headers/node.h"
#include <stdlib.h>

NODE * const create_node() {
	NODE * node = (NODE*) malloc(sizeof(NODE));
	node->next = NULL;
	node->previous = NULL;
	node->value = 0;
	return node;
}

void delete_node(NODE* node) {
	free(node);
}
