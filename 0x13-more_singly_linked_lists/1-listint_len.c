#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - returns the number of elements
*
* listint_t - list
* @h: pointer to the pointer to the first node
*
* Return: nodeCount
*/

size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
