#include <stdio.h>

/*
	arr[N] ->  arr[0] ~  arr[N-1] 
*/

#define N		5

int main()
{
	int i;
	int arr[N] = {67,78,89,9,9};
	
	arr[5] = 100;

	printf("%d\n",arr[5]);
		
	
	
	
	return 0;

}






