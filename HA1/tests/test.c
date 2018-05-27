//
// Created by beluc on 5/26/2018.
//

#include <stdlib.h>
#include <tgmath.h>
#include "../src/binarize.h"
#include "../src/task.h"

int main(int argc, char **argv) {

    const char* s1 = binarize_u(4294967296);
	const char* s2 = binarize_s(-4294967297);
    printf("%s\n", s1);
    printf("%s\n", s2);
    free(s1);
    free(s2);

    return 0;
}