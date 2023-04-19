#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes array of fun
 * @array: given array of integers
 * @size: size of the array
 * @action: pointer to the functions given
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action && size > 0)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
