#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: no of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		char *m = va_arg(list, char *);
		if (m)
			printf("%s", m);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
