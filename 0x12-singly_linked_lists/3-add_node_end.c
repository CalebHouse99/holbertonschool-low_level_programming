#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - function that adds a new node at the end of list_t
*
* @head: pointer to the first node
*
* @str: first element of the node
*
* Return: NULL or address to new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *new_node;
	struct list_s *last_node = *head;

	new_node = malloc(sizeof(struct list_s));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		{
		*head = new_node;
		return (new_node);
		}
	else	
		{
			while(last_node->next != NULL)
			{
				last_node = last_node->next;
				last_node->next = new_node;
			}
		}
	return (0);
}