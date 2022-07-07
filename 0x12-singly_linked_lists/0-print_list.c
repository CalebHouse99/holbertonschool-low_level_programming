#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all elements of list_t
*
* list_t - list to print
* @h: pointer to the pointer to the first node
*
* Return: nodeCount
*/

size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
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
