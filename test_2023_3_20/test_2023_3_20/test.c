#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <omp.h>
int main()
{
#pragma omp parallel
	{
		for (int i = 0; i < 10; i++)
		{
			printf("loop i :iteration %d by thread no.%d \n", i, omp_get_thread_num());
		}
	}
#pragma omp barrier
	for (int j = 0; j < 10; ++j)
	{
		printf("loop j : iteration %d by thread no.%d\n", j, omp_get_thread_num());
	}
	return 0;
}