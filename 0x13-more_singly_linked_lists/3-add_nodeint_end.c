#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - function that adds a new node at the end of list_t
*
* @head: pointer to the first node
*
* @n: first element of the node
*
* Return: NULL or address to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *new_node;
	struct listint_s *last_node = *head;

	new_node = malloc(sizeof(struct listint_s));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		{
		*head = new_node;
		}
	else
	{
		while (last_node->next)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
