#include <stdio.h>
#include <stdlib.h>
#include "HugeInteger.h"

void panic(char *s)
{
	fprintf(stdout, "%s", s);
	exit(1);
}

void HugeAdd(HugeInteger *a, HugeInteger *b, HugeInteger *result)
{
	int aLen, bLen, index;
	
	aLen = a.length;
	bLen = b.length;
	
}

int HugeInit(HugeInteger *p, int n){

	if(p == NULL) 
		return 0;
	
	if(n < 0 && n > 9)
		return 0;
	
	(*p).digits = (int *)malloc(n * sizeof(int));
	
	if((*p).digits == NULL){
		panic("ERROR: out of memory in HugeInit()\n");
		return 0;
	}

	return 1;
}

void foo(int argc, char **argv)
{
	int i;

	printf("PROGRAM CALL: ");

	for (i = 0; i < argc; i++)
		printf("%s%c", argv[i], (i == argc - 1) ? '\n' : ' ');

	printf("\n");
}

void HugePrint(HugeInteger *p){

	int startPos;

	if(p == NULL)	
		printf("(undefined)\n");
	
	for(startPos = p.length - 1; startPos >= 0; startPos++)
		printf("%d", startPos);
	
	printf("\n");
}
