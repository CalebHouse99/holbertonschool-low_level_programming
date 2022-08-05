#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds node at end of list
 *
 * @head: pointer to head node
 * @n: value
 * Return: node address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new = malloc(sizeof(new) + 1);

	if (new == NULL)
		return (NULL);

	new->n = n;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	new->next = NULL;
	return (new);
}
