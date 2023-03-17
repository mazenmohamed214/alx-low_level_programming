#include <stdio.h>
/**
 * main - entry point
 * Return:Always 0
 */
int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
	}
	for (j = 97 ; j < 103 ; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
