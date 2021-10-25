#include <stdio.h>

int main()
{
	char ch;

	ch = getchar();

	printf("%c\n",ch);
	printf("%d\n\n",ch);

	printf("%c\n",ch+3);
	printf("%d\n",ch+3);
/*
	putchar(ch);
	putchar('\n');
	putchar('x');
	putchar('\n');
*/

	return 0;
}


