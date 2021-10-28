#include <stdio.h>

#define N		10

int main()
{
	int a[N] = {1,1},i,j,t;

	for(i = 2; i < N; i++)
		a[i] = a[i-1] + a[i-2];
	
	for(i = 0 ; i < N; i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i = N-1; i >= 0; i--)
		printf("%d ",a[i]);
	printf("\n");

	i = 0;
	j = N-1;

	while(i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}	

	for(i = 0 ; i < N; i++)
		printf("%d ",a[i]);
	printf("\n");
	


	return 0;
}


