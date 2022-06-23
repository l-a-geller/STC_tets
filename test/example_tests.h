/* Tests from example */
#ifndef EXAMPLE_TESTS
#define EXAMPLE_TESTS

#include "test_util.h"
#include "module.h"

void example_test1(){
	uint64_t N  = 3;
	float K     = 10.0;
	float arr[] = {3.0, 4.0, 3.58};
	uint64_t *dev;
	uint64_t D;

	uint64_t expected_D     = 1;
	uint64_t expected_dev[] = {1};

	dev = (uint64_t*) malloc(sizeof(uint64_t) * N);
	D   = calc(arr, N, K, dev);
	//print_res(dev, D);

	assert_res(D, expected_D, dev, expected_dev);
	free(dev);
}

void example_test2(){
	uint64_t N  = 3;
	float K     = 10.0;
	float arr[] = {3.0, 4.0, 4.05};
	uint64_t *dev;
	uint64_t D;

	uint64_t expected_D = 2;
	uint64_t expected_dev[] = {1, 2};

	dev = (uint64_t*) malloc(sizeof(uint64_t) * N);
	D = calc(arr, N, K, dev);
	//print_res(dev, D);

	assert_res(D, expected_D, dev, expected_dev);
	free(dev);
}

void example_test3(){
	uint64_t N  = 5;
	float K     = 10.0;
	float arr[] = {3.5, 3.1, 3.9, 4.0, 4.1};
	uint64_t *dev;
	uint64_t D;

	uint64_t expected_D = 3;
	uint64_t expected_dev[] = {2, 3, 4};

	dev = (uint64_t*) malloc(sizeof(uint64_t) * N);
	D = calc(arr, N, K, dev);
	//print_res(dev, D);

	assert_res(D, expected_D, dev, expected_dev);
	free(dev);
}

void example_tests(){
	example_test1();
	example_test2();
	example_test3();
}

#endif
