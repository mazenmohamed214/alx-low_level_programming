#include <stdio.h>
/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to different functions
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
