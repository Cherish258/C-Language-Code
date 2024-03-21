// Login verification
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char password[20] = { 0 };
	int times[3] = { "twice", "once", "zero times"};
	int i = 0;
	printf("Please enter your password.\n");
	for (;i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("Successfully logged in.\n");
			break;
		}
		else
		{
			printf("The password is incorrect!\nYou can retry %s.\n", times[i]);
		}
	}
	if (i == 3)
	{
		printf("Account Lockout!\n");
	}
	return 0;
}