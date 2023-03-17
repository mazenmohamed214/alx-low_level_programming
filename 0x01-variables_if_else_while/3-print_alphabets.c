#include <stdio.h>
/**
 * main - entry point
 * Return:always 0
 */
int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 97 ; i < 123 ; i++)
	{
		putchar(i);
	}
	for (j = 65 ; j < 91 ; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
