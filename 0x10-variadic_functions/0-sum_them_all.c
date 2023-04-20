#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - adds sum of variable nums
 * @n: no of args
 * Return: integer of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
