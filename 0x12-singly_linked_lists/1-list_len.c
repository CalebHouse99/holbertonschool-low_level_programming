#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - returns the number of elements in given list_t list
*
* list_t - list to refer from
* @h: pointer to the pointer to the first node
*
* Return: nodeCount
*/

size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
