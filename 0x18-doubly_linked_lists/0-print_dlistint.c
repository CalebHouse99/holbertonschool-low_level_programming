#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Print all elements of doubly linked list
 * @h: pointer to the head
 *
 * Return: # of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		if (h->n != 0)
		{
			printf("%d\n", h->n);
		}
		else
		{
			printf("[0] (nil)\n");
		}
			h = h->next;
			nodeCount++;
	}
	return (nodeCount);
}
