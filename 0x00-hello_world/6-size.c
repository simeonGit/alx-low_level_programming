#include <stdio.h>
/**
 * main - printing the types of various size
 *
 * Return:0
*/
int main(void)
{
	int intergerType;
	float floatType;
	double doubleType;
	char charType;

	/* Sizeof operator is used to evaluate the size of variable*/
	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of double: %ld bytes\n", sizeof(doubleType));
	printf("Size of char: %ld byte\n", sizeof(charType));

	return (0);
}
