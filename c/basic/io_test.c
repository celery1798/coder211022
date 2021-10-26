#include <stdio.h>
#include <math.h>

#define WEIGHT		3.0e-23
#define QUART		950

void test1()
{
	float  q,total;

	while(1)
	{
		printf("Please enter(q for quit):");
		if(scanf("%f",&q) != 1)
			break;

		total = q * QUART / WEIGHT;

		printf("total = %e\n",total);
	}
}

void test2()
{
	int a,b,c;
	float area,s;

	printf("Please enter:");
	scanf("%d%d%d",&a,&b,&c);

	if(a+b <= c || b+c <= a || a+c <= b)
	{
		printf("Input error.\n");
		return ;
	}

	s = 1.0/2*(a+b+c);
	area = sqrt(s * (s-a) * (s-b) * (s-c));
	printf("area = %f\n",area);
}

void test3()
{
	float a,b,c,dis,x1,x2,p,q;

	printf("Please enter:");
	scanf("%f%f%f",&a,&b,&c);
	
	dis = b*b - 4*a*c;
	/*if error*/	
	p = -b/(2*a);
	q = sqrt(dis)/(2*a);
	x1 = p + q;
	x2 = p - q;

	printf("x1 = %f, x2 = %f\n",x1,x2);
}

int main()
{

	test1();
//	test2();
	//test3();
	return 0;
}




