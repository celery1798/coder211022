#include <stdio.h>

/*
	int a[2][3]:  a[0][0]~a[1][2]
*/

#define M	2
#define N	3

int main()
{
//	int a[M][N] = {{3,4,5},{6,7,8}};
//	int a[M][N] = {3,4,5,6,7,8};
//	int a[M][N] = {3,4};
//	int a[M][N] = {{3},{4,5,6}};
	int a[][N] = {3,4,5,6,7,8};
	int i,j;

	printf("a = %p\n\n",a);
	
	printf("sizeof(a) = %ld\n",sizeof(a));
	printf("sizeof(a[0][0]) = %ld\n\n",sizeof(a[0][0]));

/*
	for(i = 0 ; i < M ;i++)
	{
		for(j = 0 ; j < N; j++)
			scanf("%d",&a[i][j]);
	}
*/
	for(i = 0 ; i < M ;i++)
	{
		for(j = 0 ; j < N; j++)
			printf("%p --> %d\n",&a[i][j],a[i][j]);
		printf("\n");	
	}


	return 0;
}


