#include <stdio.h>
/*
	if(exp)
	{
		xxxx;
		xxxxxxx;
		xxxxx;
	}



	if(exp1)
	{
		xxxx1;
	}
	else
	{
		xxxx2;
	}


	if(exp1)
	{
		if(exp2)
		{
		
		}
	}
	else
	{	
		if(exp3)
		{
		
		}
	}

*/


int main()
{


	//else只与离自己最近的if配对
	int a = 1,b = 1,c = 2;

	if(a == b)
	{
		if(b == c)
			printf("a == b == c\n");
	}	
	else
		printf("a != b\n");





/*
	int a = 0,b = 0;
//	if(a == b
	if( a = b)
		printf("a == b\n");
	else
		printf("a != b\n");
*/



/*
	int a = 9, b = 10;

//	if( b++ <= a || a++ > 20 || b++)
//		printf("1\n");

	if( b++ <= a && a++ < 20 || ++b)
	    printf("1\n");
	else
		printf("0\n");
*/




/*
	int a = 3,b = 5,c;

	if(a < b)
		c = a;
	else
		c = b;
	printf("c = %d\n",c);
*/

	return 0;
}











