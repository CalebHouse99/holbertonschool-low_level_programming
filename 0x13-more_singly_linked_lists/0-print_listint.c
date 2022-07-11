#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all elements of listint_t
*
* listint_t - list to print
* @h: pointer to the pointer to the first node
*
* Return: nodeCount
*/

size_t print_listint(const listint_t *h)
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
			printf("Error\n");
		}
			h = h->next;
			nodeCount++;
	}
	return (nodeCount);
}
