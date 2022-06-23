#ifndef TEST_UTIL
#define TEST_UTIL

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "assert.h"

void print_res(uint64_t *dev, uint64_t D){
	uint64_t i;

	i = 0;
	printf("[");
	printf("%ld", dev[i]);
	for (i = 1; i < D; i++)
		printf(", %ld", dev[i]);
	printf("]");
	printf(", ");
	printf("%ld\n", D);
}

void assert_res(uint64_t D, uint64_t expected_D, uint64_t *dev, uint64_t *expected_dev){
	assert(expected_D == D);
	for (uint64_t i = 0; i < D; i++)
		assert(expected_dev[i] == dev[i]);
}

#endif
