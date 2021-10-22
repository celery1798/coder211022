#include <stdio.h>

//sizeof(变量名/数据类型)

int main()
{
	int i = 1;

	printf("sizeof(int) = %ld\n",sizeof(int));
	printf("sizeof(int) = %ld\n",sizeof(i));
	
	
	printf("i = %d\n",i);
	printf("&i = %p\n",&i);
	


	return 0;
}


