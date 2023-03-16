#include <stdio.h>
/**
 * main - A program that prints the size of various computer data types
 * Retrun: 0 (Success)
 */
main(void)
{
	printf("Size of char: %d byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %dbyte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %dbyte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int : %dbyte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %dbyte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
