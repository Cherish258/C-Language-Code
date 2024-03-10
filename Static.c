// Static
#include <stdio.h>

typedef unsigned int u_int; // The variable type is renamed

static int YEAR = 2024; // Change to a global variable for the internal link property

void test()
{
	u_int num1 = 1;
	static u_int num2 = 1; // Change to a static variable
	printf("%d %d\n", ++num1, ++num2);
}