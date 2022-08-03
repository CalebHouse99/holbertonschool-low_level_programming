#include "lists.h"

/**
 * print_dlistint - Print all elements of doubly linked list
 * @h: pointer to the head
 *
 * Return: # of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}