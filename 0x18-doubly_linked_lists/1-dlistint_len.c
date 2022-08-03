#include "lists.h"

/**
 * dlistint_len - return nodecount
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
