// Array of strings
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c', '\0' }; // \0 -- End identifier
	int len = strlen("abc"); // Find the length of the string

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", len);

	return 0;
}
