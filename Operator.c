// Operator
#include <stdio.h>

int main()
{
	printf("Take the quotient value of 9÷2: %d\n", 9 / 2);
	printf("Take the result of division of 9÷2: %.1f\n", 9 / 2.0);
	printf("Take the modulus value of 9÷2: %d\n", 9 % 2);
	printf("Shift 2 to the left by one place: %d\n", 2 << 1);
	int Year = 0;
	printf("The value of Year: %d\n", Year += 2024);
	printf("The logical reversed value of 0: %d\n", !0);
	printf("The negative value of 1: %d\n", -1);
	printf("The size of int: %d\nThe size of 1: %d\n", sizeof(int), sizeof 1);
	int arr[3] = { 0 };
	printf("The size of an array of three zeros: %d\n", sizeof arr);
	printf("The number of elements in an array composed of 3 zeros: %d\n", sizeof(arr) / sizeof(arr[0]));
	printf("The binary reversed value of 0: %d\n", ~0);
	int num1 = 1;
	int num2 = 1;
	printf("First num1 = %d, num2 = %d\n", num1, num2);
	printf("The num1 is self-incremented first and then executed: %d\n", ++num1);
	printf("The num2 is executed first and then auto-incremented: %d\n", num2++);
	printf("Now num1 = %d, num2 = %d\n", num1, num2);
	printf("Convert the 3.14 coercion type to an integer: %d\n", (int)3.14);
	printf("The result of 1&1: %d\nThe result of 1&0: %d\nThe result of 0&0: %d\n", 1 && 1, 1 && 0, 0 && 0);
	printf("The result of 1|1: %d\nThe result of 1|0: %d\nThe result of 0|0: %d\n", 1 || 1, 1 || 0, 0 || 0);
	printf("The maximum of 1 and 2: %d\n", 1 > 2 ? 1 : 2);
	printf("The result of (1+1,2+2,3+3): %d\n", (1 + 1, 2 + 2, 3 + 3));
	char str[5] = { "Hello" };
	printf("The second letter of Hello: %c\n", str[1]);

	return 0;
}
