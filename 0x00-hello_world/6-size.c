#include <stdio.h>
/**
 * main - printing the types of various size
 *
 * Return:0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	/* Sizeof operator is used to evaluate the size of variable*/
	printf("Size of char: %ld bytes\n", (unsigned long)sizeof(a));
	printf("Size of int: %ld bytes\n", (unsigned long)sizeof(b));
	printf("Size of long int: %ld bytes\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %ld bytes\n", (unsigned long)sizeof(d));
	printf("Size of float: %ld bytes\n", (unsigned long)sizeof(e));
	return (0);
}
