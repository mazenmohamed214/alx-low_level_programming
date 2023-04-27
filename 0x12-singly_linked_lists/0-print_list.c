#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints a linked list
 * @h: given list
 * Return: size of linked list
 */
size_t print_list(const list_t *h)
{
	int size = 0;
	const list_t *n;

	n = malloc(sizeof(list_t));
	n = h;
	if (n == NULL)
		return (1);
	while (n != NULL)
	{
		printf("[%d] %s\n", n -> len, n -> str);
		n = n -> next;
		size++;
	}
	return (size);
}
