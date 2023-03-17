#include <stdio.h>
/**
 * main - entry point
 * Return:Always 0
 */
int main(void)
{
	int i = 0;

	for (i = 97 ; i < 123 ; i++)
	{
		if (i == 101 || i == 113)
		{

		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
