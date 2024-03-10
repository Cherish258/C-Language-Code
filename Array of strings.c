// Array of strings
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c', '\0' }; // \0 -- End identifier

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	return 0;
}
