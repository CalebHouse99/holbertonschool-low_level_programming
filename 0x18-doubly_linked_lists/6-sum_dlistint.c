#include "lists.h"

/**
 * sum_dlistint - sums all data
 *
 * @head: head node
 * Return: sum of data
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
