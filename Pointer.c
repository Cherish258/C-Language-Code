// Pointer
#include <stdio.h>

int main()
{
	int a = 10;
	char b = 'a';
	int* pa = &a;
	char* pb = &b;
	printf("The address of a: %p\nThe address of b: %p\n", pa, pb);
	printf("a = %d\n", *pa); // Dereference operations
	printf("The size of char*: %d bytes\n", sizeof(char*));
	printf("The size of int*: %d bytes\n", sizeof(int*));
	printf("The size of short*: %d bytes\n", sizeof(short*));
	printf("The size of long*: %d bytes\n", sizeof(long*));
	printf("The size of long long*: %d bytes\n", sizeof(long long*));
	printf("The size of float*: %d bytes\n", sizeof(float*));
	printf("The size of double*: %d bytes\n", sizeof(double*));

	return 0;
}