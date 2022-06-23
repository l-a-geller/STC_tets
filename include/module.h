#ifndef MODULE
#define MODULE

#include <stdint.h>

/* _out_ output array length */
uint64_t calc(
	float *arr,   /* _in_  Input array        */
	uint64_t N,   /* _in_  Input array length */
	float    K,   /* _in_  %, decide, whether the remaining numbers
	               *       differ from the maximum by more than K%
	               */
	uint64_t *dev /* _out_ List of indexes of the input array of numbers
	               *       that do not differ by more than K% from the largest
	               *       (including the largest)
	               */
);

#endif
