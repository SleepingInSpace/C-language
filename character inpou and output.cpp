// character inpou and output.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/* character counting*/
int main()
{
	long b, l ,nc;
	char c;
	b = 0;
	l = 0;
	nc = 0;
	while ((c = getchar()) != EOF)	{
		if (c == ' ')
			++b;
		if (c == '\n') 
			++l;
		++nc;
	}
	printf("blanks:%d,lines:%d,characters:%d\n",b,l,nc-l);
	
	
	


}

