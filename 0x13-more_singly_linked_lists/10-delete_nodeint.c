#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - deletes node int at and index
*
* @head: points to first node
* @index: given index to delete
*
* Return: 1 on success, -1 on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int counter = index - 1, i;
	listint_t *temp, *iterator = *head;

	if (index == 0)
	{
		temp = (*head)->next;
		(*head)->next = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < counter; i++, iterator = iterator->next)
	{
		if (!iterator->next)
			return (-1);
	}
	temp = iterator->next;
	iterator->next = temp->next;
	free(temp);
	return (1);
}
