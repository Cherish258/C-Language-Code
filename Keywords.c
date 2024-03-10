// Keywords
#include <stdio.h>

extern void test(); // Declaring an external function

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}

	return 0;
}