#include "lists.h"

/**
 * sum_dlistint - 
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i = i + head->n;
		head = head->next;
	}

	return (i);
}