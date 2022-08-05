#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint_backward - prints the doubly linked list backwards
 *
 * @h: pointer to head
 * Return: # of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t len = 0;

	if (h == NULL)
		return (0);

	for (temp = h; temp->next != NULL; temp = temp->next)
	{}
	for (; temp != NULL; temp = temp->prev, len++)
	{
		printf("%d\n", temp->n);
	}
	return (len);
}
