#include <stdio.h>
/**
 * main - A program that prints the size of various computer data types
 * Retrun: 0 (Success)
 */
main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %lu byte(s)\nSize of an int: %lu  byte(s)\nSize of a long int: %lu byte(s)\nSize of a long long int: %lu byte(s)\nSize of a float: %lu byte(s)\n", (unsigned long)sizeof(a),(unsigned long)sizeof(b),(unsigned long)sizeof(c),(unsigned long)sizeof(d),(unsigned long)sizeof(f));
	return (0);
}
