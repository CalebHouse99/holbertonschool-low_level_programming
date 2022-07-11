#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint - function that adds a new node at the beginning of listint_t
*
* @head: pointer to the first node
*
* @n: first element of the node
*
* Return: NULL or address to new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *new_node;

	new_node = malloc(sizeof(struct listint_s));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	if (n != 0)
		return (new_node);
	else
		return (0);
}
