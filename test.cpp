#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main()
{
	#pragma omp parallel num_threads(2)
	{
	   int thread_id = omp_get_thread_num();	
	   #pragma omp critical
	   {
			printf("hello from thread %d \n", thread_id);
	   }
	}

	return 0; 
}