#include <stdio.h>

/*
	arr[N] ->  arr[0] ~  arr[N-1] 
*/

#define N		5

int main()
{
	int i;
//	int arr[N];
//	static int arr[N];
//	int arr[N] = {67,78,89,9,9};
//	int arr[N] = {67,78};
//	int arr[] = {67,78,89,9,9};
	int arr[N];

//F	arr[N] = {67,78,89,9,9};
//F	arr = {67,78,89,9,9};

/*
	arr[0] = 3;
	arr[1] = 20;
	arr[2] = arr[1]-arr[0];
	arr[3] = arr[1]/10;
	arr[4] = arr[0]++;
*/

	for(i = 0 ; i < N; i++)
//		scanf("%d",&arr[i]);
		arr[i] = 100+i;

	printf("sizeof(arr) = %ld\n",sizeof(arr));
	printf("sizeof(arr[0]) = %ld\n\n",sizeof(arr[0]));

	printf("arr = %p\n\n",arr);

	for(i = 0 ; i < N ; i++)
		printf("%p --> %d\n",&arr[i],arr[i]);
	printf("\n");

	return 0;
}






