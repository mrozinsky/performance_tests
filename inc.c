// author: mrozinsky (Michal Jakub Mrozinski)
// 18.09.2021 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h> // needed for uint32_t
#include <math.h>

int main()
{

	clock_t start = clock();
	
	uint32_t result = 0;

	for (uint32_t i=1; i<10000001; i++)
	{
		result++;
	}
		
	clock_t end = clock();
	double execution_time = (double)(end - start) / CLOCKS_PER_SEC;
	
	printf("******************\n");
	printf("INC - C Version\n");
	printf("Program that increment one variable 10000000 times (10 millions)\n");
	printf("Execution time: \n%f\n", execution_time);
	printf("******************\n");

	return 0;
	
}

