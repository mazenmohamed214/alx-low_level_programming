#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - pop a node
 * @head: dbl ptr to list
 *
 * Return: node poped
 */
int pop_listint(listint_t **head)
{
	int poped;
	listint_t *tmp;

	if (!*head || !head)
		return (0);
	poped = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (poped);
}
