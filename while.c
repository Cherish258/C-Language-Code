// While
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	// Use "while" loop to output numbers
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
		{
			continue;// To skip the after statement in this loop
		}
		if (i == 9)
		{
			break; // To break out of the "while" loop
		}
		printf("%d\n", i);
	}

	// Set a password
	char password[20] = { 0 };
	printf("Please enter password:\n");
	scanf("%s", password);
	printf("Please confirm password(Y/N):\n");
	int temp = 0;
	while ((temp = getchar()) != '\n')
	{
		;// Clean up the buffer
	}
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("Confirm success\n");
	}
	else
	{
		printf("Confirm failed\n");
	}

	// Filter non-numeric characters
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		{
			continue;
		}
		putchar(ch);
	}

	return 0;
}