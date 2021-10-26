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
	// 0 ~ 100
	switch(score/10)
	{
		case 10:
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		default:
			printf("E\n");
			break;
		
	}

	return 0;
}





