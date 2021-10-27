#include <stdio.h>

#define INIT	100
#define RATE_SIMP	0.1
#define RATE_COMP	0.05

void test1()
{
	int year = 0;
	double d1 = INIT,d2 = INIT;

	while(d1 >= d2)
	{
		d1 = d1 + INIT * RATE_SIMP;
		d2 = d2 + d2 * RATE_COMP;
		year++;
	}
	printf("year = %d\n",year);
	printf("d1 = %lf, d2 = %lf\n",d1,d2);
}

void test2()
{
	int ct_even = 0,ct_odd = 0;
	float sum_even = 0,sum_odd = 0;
	int num;

	while(scanf("%d",&num) == 1 && num != 0)
	{
		if(num % 2 == 0)
		{
			ct_even++;
			sum_even += num;
		}
		else
		{
			ct_odd++;
			sum_odd += num;
		}
	}
	printf("EVEN:%d, AVE:%f\n",ct_even,sum_even/ct_even);
	printf("ODD:%d, AVE:%f\n",ct_odd,sum_odd/ct_odd);

}

void test5()
{
	int i,j;

	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= i; j++)
			printf("%d*%d=%d ",i,j,i*j);
		printf("\n");
	}

}

void test4()
{
	long long int i, f1 = 1,f2 = 1;
	
	for(i = 1 ; i <= 20; i++)
	{
		printf("%12lld%12lld",f1,f2);
		if(i % 2 == 0)
			printf("\n");
		f1 += f2;
		f2 += f1;
	}
}


void test6()
{
	int x , y , z;
	
	for(x = 0 ; x < 100/5; x++)
	{
		for(y = 0; y < 100/3 ; y++)
		{
			z = 100 - x - y;
			if(z % 3 == 0 && 5*x + 3*y + z/3 == 100)
			{
				printf("%d %d %d\n",x,y,z);
			}
		}
	}
}

#define ROW		6
void test9()
{
	int i,j;
	char ch = 'F';

	for(i = 0 ; i < ROW; i++)
	{
		for(j = 0 ; j < i; j++)
			printf("_");

		for(j = 0,ch = 'F'; j <= i; j++,ch--)
			printf("%c",ch);

		printf("\n");
	}
}

#define LEFT	30000000
#define RIGHT	30000200

void test14()
{
	int i,j,flag = 1;

	for(i = LEFT; i <= RIGHT; i++)
	{
		flag = 1;
		for(j = 2; j <= i/2 ; j++)
		{
			if(i % j == 0)
			{	
				flag = 0;
				break;	
			}
		}
		
		if(flag)	// if(flag != 0)
			printf("%d is a primer.\n",i);
	}
}

#define MAX		100
#define MIN		0
// END :  -1/q	

void test17()
{
	int score,min = MAX,max = MIN;

	printf("Please enter (q for quit): ");
	while(scanf("%d",&score) == 1)
	{
		if(score < MIN || score > MAX)
		{
			printf("ERROR! Try again: ");
			continue;
		}	
		min = score < min ? score : min;
		max = score > max ? score : max;
	}
	
	printf("max : %d\tmin : %d\n",max,min);
}

int main()
{
//	test1();
//	test2();
//	test4();	
//	test5();
//	test6();
//	test9();
//	test14();
	test17();

	return 0;
}


