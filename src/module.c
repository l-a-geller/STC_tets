#include "module.h"

float find_max(float *arr, uint64_t N){
	float max;

	max = arr[0];
	for (uint64_t i = 0; i < N; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

static inline float deviation(float base, float el){
	return 100 * (base - el) / base;
}

uint64_t deviants(float *arr, uint64_t N, float K, uint64_t *dev, float max){
	uint64_t outN = 0;
	for (uint64_t i = 0; i < N; i++){
		if (deviation(max, arr[i]) < K){
			// TODO: Mind a bitmap
			dev[outN] = i;
			outN++;
		}
	}
	return outN;
}

uint64_t calc(float *arr, uint64_t N, float K, uint64_t *dev){
	uint64_t outN;
	float max;

	max = find_max(arr, N);
	outN = deviants(arr, N, K, dev, max);

	return outN;
}
