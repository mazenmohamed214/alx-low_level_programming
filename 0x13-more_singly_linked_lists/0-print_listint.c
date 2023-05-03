#include "lists.h"
/**
 * print_listint - prints list of int
 * @h: linked list
 *
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
