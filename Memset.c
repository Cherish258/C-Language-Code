// Memset
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "Hello world!";
	memset(arr, 'x', 5);
	printf("%s\n", arr);
	return 0;
}