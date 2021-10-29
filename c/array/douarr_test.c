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

void test3()
{
	int a[5][4] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}},i,j;

	//4*3  scanf
//	for(i = 0 ; i < 4; i++)	{a[4][i] = 0; a[i][3]=0; }

	for(i = 0 ; i < 4; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			a[4][j] += a[i][j];
			a[i][3] += a[i][j];
			a[4][3] += a[i][j];
		}
	}	

	for(i = 0 ; i < 5; i++)
	{
		for(j = 0 ; j < 4; j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}






}

int main()
{

//	test1();
//	test2();
	test3();

	return 0;
}


