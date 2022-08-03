#include "lists.h"
/**
 * add_dnodeint - adds node to beginning of list
 *
 * @head: first node
 * @n: number
 * Return: Address of new element, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	if ((*head) != NULL)
		(*head)->prev = newNode;

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;
	(*head) = new;

	return (*head);
}
