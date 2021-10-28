#include <stdio.h>

/*
	arr[N] ->  arr[0] ~  arr[N-1] 
	arr[i] ->  *(arr+i)
	&arr[i] ->  arr+i

	arr[i] => *(arr+i) => *(i+arr) => i[arr]  
*/

int main()
{
	int i;
	int arr[] = {67,78,89,9,9};
	
	for(i = 0 ; i < sizeof(arr)/sizeof(arr[0]); i++)	
	//	printf("%p --> %d\n",&arr[i], arr[i]);
//		printf("%p --> %d\n",arr+i, *(arr+i));
		printf("%p --> %d\n",i+arr, i[arr]);
	
	return 0;

}






