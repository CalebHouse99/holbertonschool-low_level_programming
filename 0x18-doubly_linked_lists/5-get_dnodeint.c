#include "lists.h"

/**
 * get_dnodeint_at_index - return node at index
 *
 * @head: pointer to the head node
 * @index: return index
 * Return: index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!head->next)
			return (NULL);

		head = head->next;
	}
	return (index);
}