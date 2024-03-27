// Shutdown
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char a[20] = { 0 };
	system("shutdown -s -t 600");
again:
	printf("Please enter \"Cherish\", otherwise the computer will shut down in 10 minutes...\n");
	scanf("%s", a);
	if (strcmp(a, "Cherish") == 0)
	{
		system("shutdown -a");
		printf("Cherish is No.1!\n");
	}
	else
	{
		goto again;
	}
	return 0;
}