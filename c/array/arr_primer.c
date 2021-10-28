#include <stdio.h>

int main()
{
	int primer[1001] = {0};
	int i,j;

	for(i = 2; i < 1001; i++)
	{
		if(primer[i] == 0)
		{	
			for(j = i+i; j < 1001; j+=i)
				primer[j] = 1;
		}
	}

	for(i = 2; i < 1001; i++)
		if(primer[i] == 0)
			printf("%d ",i);
	printf("\n");

	return 0;
}


