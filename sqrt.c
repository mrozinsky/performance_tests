// author: mrozinsky (Michal Jakub Mrozinski)
// 18.09.2021 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h> // needed for uint32_t
#include <math.h>

// Results:
// Duron 750Mhz - 1.505072 seconds 
// Intel Core i7-3770 3.40 GHz (using only one thread) - 0.426000 seconds
// Intel Core 2 Duo E4500 2.20 GHz (using only one thread) - 1.156000 seconds
// Intel(R) Core(TM) Duo T2400 1.83GHz (using only one thread) - 0.711149 seconds

int main()
{

	clock_t start = clock();
	
	float result = 0;

	for (uint32_t i=1; i<10000001; i++)
	{
		result = sqrt(i);
	}
		
	clock_t end = clock();
	double execution_time = (double)(end - start) / CLOCKS_PER_SEC;
	
	printf("******************\n");
	printf("SQRT - C Version\n");
	printf("Program that calculates square roots of numbers from 1 to 10000000 (10 millions)\n");
	printf("Execution time: \n%f\n", execution_time);
	printf("******************\n");

	return 0;
	
}
