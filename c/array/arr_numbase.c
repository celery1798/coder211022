#include <stdio.h>

int main()
{
	int num,base;
	int a[128],i = 0;

	printf("Please enter for NUM:");
	scanf("%d",&num);
	printf("Please enter for BASE(2,8,16):");
	scanf("%d",&base);

	if(base != 2 && base != 8 && base != 16)
		return -1;

	do
	{
		a[i] = num % base;
		i++;
		num = num / base;
	}while(num != 0);

	for(i--; i >= 0; i--)
	{
		if(a[i] >= 10)
			printf("%c ",a[i]-10+'A');
		else
			printf("%d ",a[i]);

	}
	printf("\n");

	return 0;
}


