#include <stdio.h>

#define M	2
#define N	3

void test1()
{
	int a[M][N] = {1,2,3,4,5,6},b[N][M];
	int i,j;

	for(i = 0 ; i < M ;i++)
	{
		for(j = 0 ; j < N; j++)
		{	
			b[j][i] = a[i][j];
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	

	for(i = 0 ; i < N; i++)
	{
		for(j = 0 ; j < M ;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}

}

void test2()
{
	int a[M][N] = {11,28,63,14,105,36};
	int max = a[0][0],row = 0,col = 0,i,j;

	for(i = 0 ; i < M ;i++)
	{
		for(j = 0 ; j < N; j++)
		{
			if(max < a[i][j])
			{
				max = a[i][j];
				row = i;
				col = j;
			}
		}
	}

	printf("MAX:a[%d][%d] = %d\n",row,col,max);
}



int main()
{

//	test1();
	test2();

	return 0;
}


