// Three words, eight letters, say it, and I'm yours.
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
	char arr1[] = "Three words, eight letters, say it, and I'm yours.";
	char arr2[] = "**************************************************";
	int left = 0;
	int right = strlen(arr2) - 1;
	printf("%s\n", arr2);
	for (;left <= right;left++)
	{
		arr2[left] = arr1[left];
		Sleep(500);
		system("cls");
		printf("%s\n", arr2);
	}
	return 0;
}