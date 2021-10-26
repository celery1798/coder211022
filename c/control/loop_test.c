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
int main()
{
//	test1();
//	test2();
	
	test5();



	return 0;
}


