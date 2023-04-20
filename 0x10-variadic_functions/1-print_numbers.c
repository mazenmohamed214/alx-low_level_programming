#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints nums separated by a given string
 * @separator: string to be printed between nums
 * @n: no of nums
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator)
	{
		for (i = 0; i < n-1; i++)
		{
			printf("%d%s", va_arg(list, int), separator);
		}
		printf("%d", va_arg(list, int));
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
		}
	}
	printf("\n");
	va_end(list);
}
