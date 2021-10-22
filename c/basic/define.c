#include <stdio.h>
//  #define 宏名  宏体

#define PI		3.1
#define M		(2+3)
#define N		(M-4)

#define SEC_YEAR	(60LL*60LL*24LL*365LL)


//float PI = 3.14;

int main()
{
	float r;

	PI = 200;
	r * PI;
	r * r * PI;
	printf("PI:%f\n",PI);

//	printf("%d\n",M*M);

	return 0;
}


