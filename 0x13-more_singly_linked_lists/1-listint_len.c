#include <stdio.h>
#include "lists.h"
/**
 * listint_len - prints length of linked list
 * @h: linked list
 *
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
