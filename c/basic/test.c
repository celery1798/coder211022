#include <stdio.h>

int main()
{
	int i = 3456,j = 5;
	float f = 123.5678;
	char ch = 'm';

	printf("Please enter:");
	scanf("%d%d",&i,&j);
	
	printf("i = %d, j = %d\n",i,j);
/*
	printf("---%6d---\n",i);
	printf("---%-6d---\n",i);
	printf("XXX%.2fXXX\n",f);
	printf("XXX%10.2fXXX\n",f);
	printf("(((%.5s)))\n","helloworld");
*/
	return 0;
}


