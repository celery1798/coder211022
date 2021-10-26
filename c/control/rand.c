#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

	srand(getpid());

	while(1)
	{
		printf("%d\n",rand()%20+20);
		sleep(1);
	}




	return 0;
}


