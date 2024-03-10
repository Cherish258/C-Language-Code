// Array of strings
#include <stdio.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c', '\0' }; // \0 -- End identifier

	printf("%s\n", arr1);
	printf("%s\n", arr2);

	return 0;
}