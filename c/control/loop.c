#include <stdio.h>
//求100以内所有数的和
/*
for( 初始条件  ; 终止条件(循环成立的条件) ; 步长变化  )
{
	循环体;
}

while(循环成立的条件)
{
	 循环体;

}

do
{
	循环体;
}while(循环成立的条件);



*/


int main()
{	
	int i = 1,sum = 0;

	do
	{
		sum += i;
		i++;
	}while(i <= 100);



/*
	while(i <= 100)
	{
		sum += i;
		i++;
	}

*/

/*
	for( ; ; )
	{
		sum += i;
		i++;
		if(i > 100)
			break;
	}
*/

/*
	for(i = 1; i <= 100; i++)
	{
		sum += i;
	}	
*/

	printf("i = %d\n",i);
	printf("sum = %d\n",sum);

	return 0;
}


