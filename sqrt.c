#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h> // needed for uint32_t
#include <math.h>

int main()
{
	//uint32_t a = 10000;
	//uint32_t b = 10000;
	//for (uint32_t i =0;i <10001; i++)
	//{
	//if (a == i)
	//{
//		printf("takie same");
	//}
//}
	clock_t start = clock();
	
	float result = 0;
	uint32_t test = 1000;
	//                   4294967295
	//                   0987654321
	for (uint32_t i=0; i<1000000000; i++)
	{
		//if (i%1000000000==0) printf("%u\n",i);
		//result = sqrt(i);
		if (i == test) printf("hello");
	}
	
	for (uint32_t i=0; i<1000000000; i++)
	{
		//if (i%1000000000==0) printf("%u\n",i);
		//result = sqrt(i);
		if (i == test) printf("hello");
	}
	
	//for (uint32_t i=0; i<1000000000; i++)
	//{
		//if (i%1000000000==0) printf("%u\n",i);
		//result = sqrt(i);
	//	if (i == test) printf("hello");
	//}
	
	/*
	uint32_t test = 1000;
	for (uint32_t i=0; i < 2000; i++)
	{
		//if (i%1000000000==0) printf("%u\n",i);
		//result = sqrt(i);
		if (i == test) printf("hello");
	}
	*/
		
	clock_t end = clock();
	float execution_time = (float)(end - start) / CLOCKS_PER_SEC;
	
	printf("\e[1;1H\e[2J");
	printf("\033[38:2:255:0:255m******************");
	printf("Program that calculates square roots of numbers from 0 to 4294967295");
	printf("Execution time: \n%f\n", execution_time);
	printf("******************");

	return 0;
}
