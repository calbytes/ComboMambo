#include <stdio.h>
#include <time.h>
#include "comboPWD.c"

int main( int argc, const char* argv[] )
{
    clock_t start, end;
    double cpu_time_used;	
    start = clock();

	findPWD();
	
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("time to complete : %f\n", cpu_time_used);
	return 0;
}