#include <stdio.h>

/*
switch(exp)
{
	case 整形/整形表达式1:				//4 2+3 'A'
		xxxxx;
		break;
	case  2:
		xxxx;
		xxxx;
		break;
	....
	...
	default:
		xxxx;
		xxxx;
		break;

}
*/


int main()
{
	char ch;

	ch = getchar();
	
	switch(ch)
	{
		case 'A':
		case 'a':
			printf("Ant:A small insect that lives in group.\n");
			break;
			
		case 'b':
		case 'B':
			printf("Butterfly:A flying insect with a long thin body and big wings.\n");
			break;

		case 'c':
		case 'C':
			printf("Cobra: A highly venomous snake native to Africa.\n");
			break;
		case 'd':
		case 'D':
			printf("Donkey: A animal with short legs and long ears.\n");
			break;
		default:
			break;
	}





	return 0;
}


