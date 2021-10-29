#include <stdio.h>
#include <unistd.h>

#define 	N		10

void bubble()
{
	int a[N] = {5,23,1,89,37,28,7,123,89,6};
	int i,j,tmp,t;
	
	for(i = 0 ; i < N; i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i = 0 ; i < N-1; i++) 
	{
		for(j = 0;j < N-1-i ; j++)
		{
			if(a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
/*
		for(t = 0 ; t < N; t++)
			printf("%d ",a[t]);
		printf("\n");
		getchar();
*/	
	}

	for(i = 0 ; i < N; i++)
		printf("%d ",a[i]);
	printf("\n");
}

void select()
{
	int a[N] = {5,23,1,89,37,28,7,123,89,6};
	int i,j,tmp,t;

	for(i = 0 ; i < N; i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i = 0 ; i < N-1; i++)
	{
		t = i;
		for(j = i+1 ; j < N; j++)
		{
			if(a[t] > a[j])
				t = j;				
		}
		if(t != i)
		{
			tmp = a[t];
			a[t] = a[i];
			a[i] = tmp;
		}
/*
		for(t = 0 ; t < N; t++)
			printf("%d ",a[t]);
		printf("\n");
		getchar();
*/
	}

	for(i = 0 ; i < N; i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main()
{
//	bubble();
	select();

	return 0;
}







