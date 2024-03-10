// Escape characters
#include <stdio.h>

int main()
{
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("C:\\Escape characters.c\n");
	printf("\a\n"); // Buzzer
	printf("%d\n", '\101'); // \101 -- Three-digit octal number
	printf("%d\n", '\x41'); // \x41 -- Two-digit hexadecimal number

	return 0;
}