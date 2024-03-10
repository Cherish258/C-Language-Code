// Selective structure
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char input = 'Y';

	printf("Will World War III break out?(Y/N)\n");
	scanf("%c", &input);
	if (input == 'Y')
	{
		printf("You're right!");
	}
	else
	{
		printf("You're wrong!");
	}

	return 0;
}
