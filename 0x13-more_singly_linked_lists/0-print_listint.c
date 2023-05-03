#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints list of int 
 * @h: linked list
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (1);
	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
