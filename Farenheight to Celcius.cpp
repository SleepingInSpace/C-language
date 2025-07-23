// expl 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
/*code for farenheit celsius table */
int main()
{
	int F, C;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	F = lower;
    printf("farh\t cels\n");
	while (F <= upper) {
		C = 5 * (F - 32) / 9;
		printf("%3d\t%3d\n", F, C);
		F = F + step;
	}
	
	getchar();
}

