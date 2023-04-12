#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of variable size
 * Return: character
 * @size: size of array
 * @c: character to initialize the array with
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	unsigned int i;
	char *arr;

	arr = (char *)malloc(sizeof(unsigned int) * size);
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
