#include <stdio.h>

/*
	int a[2][3];

	a ->  
	a+1  -> 

	a[i][j] -> *(*(a+i)+j)
	&a[i][j] -> *(a+i)+j
*/

#define M	2
#define N	3

int main()
{
	int a[M][N] = {{3,4,5},{6,7,8}};
	int i,j;

	printf("sizeof(a) = %ld\n",sizeof(a));
	printf("sizeof(a[0][0]) = %ld\n\n",sizeof(a[0][0]));

	printf("a = %p\n",a);
	printf("a+1 = %p\n\n",a+1);

	for(i = 0 ; i < M ;i++)
	{
		for(j = 0 ; j < N; j++)
			//printf("%p --> %d\n",&a[i][j],a[i][j]);
			printf("%p --> %d\n",*(a+i)+j,*(*(a+i)+j));
		printf("\n");	
	}

	return 0;
}


