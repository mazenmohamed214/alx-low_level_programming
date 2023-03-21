#include "main.h"
/**
 * times_table - prints all the time tables starting from zero till 9
 */
void times_table(void)
{
	int i,j;

	while (i < 9)
	{
		j = 0;
	       while (j < 10)
	       {
		       _putchar(j*i + '0');
		       _putchar(',');
		       _putchar(' ');
		       j++;
	       }
	      _putchar('\n');
	}
}
