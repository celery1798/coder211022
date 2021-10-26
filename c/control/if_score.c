#include <stdio.h>

int main()
{
	int score;

	printf("Please enter [0,100] :");
	scanf("%d",&score);

	if(score < 0 || score > 100)
	{
		printf("ERROR!\n");
		return -1;
	}
	// [0,100]

	if(score >= 90)
		printf("A\n");
	else // < 90
	{
		if(score >= 80)
			printf("B\n");
		else	// < 80
		{
			if(score >= 70)
				printf("C\n");
			else
			{
				if(score >= 60)
					printf("D\n");
				else
					printf("E\n");
			}
		}
	
	}

/*	
	if(score >= 90)
		printf("A\n");//putchar('A');
	if(score >= 80 && score < 90)
		printf("B\n");
	if(score >= 70 && score < 80)
		printf("C\n");
	if(score >= 60 && score < 70)
		printf("D\n");
	if(score < 60)
		printf("E\n");
//	putchar('\n');
*/

	return 0;
}





