#include<stdio.h>

#ifndef DEBUG
	#define WORLD "Linux C World\n"
#else	
	#define WORLD "C World\n"
#endif
	
	
int main()
{
	printf("Hello "WORLD);
	return 0;
}