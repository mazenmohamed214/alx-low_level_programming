#include <stdio.h>
/**
 * array_iterator - executes a function for elements in an array
 * @array: given array of integers
 * @size: size of the array
 * @action: pointer to the functions given
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;
		for (i = 0; i < size; i++)
		{
			action(i);
		}
	}
}
