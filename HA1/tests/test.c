//
// Created by beluc on 5/26/2018.
//

#include <stdlib.h>
#include <tgmath.h>
#include "../src/binarize.h"
#include "../src/task.h"

int main(int argc, char **argv) {
	int test_key = 4;
	int test_arr[] = {1, 2, 3, 4, 5};
	int arr_len = sizeof(test_arr) / sizeof(test_arr[0]);
	int result_expected = 3;

	int result = binsearch(test_key, test_arr, arr_len);
	printf("%d\n", result);
	
	return 0;
    const char* s1 = binarize_u(4294967296);
	const char* s2 = binarize_s(-4294967297);
    printf("%s\n", s1);
    printf("%s\n", s2);
    free(s1);
    free(s2);

    return 0;
}