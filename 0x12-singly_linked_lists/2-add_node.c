#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of list_t
*
* @head: pointer to the first node
*
* @str: first element of the node
*/

list_t *add_node(list_t **head, const char *str)
{
	strdup(str);
	struct list_s *new_node;
	new_node = malloc(sizeof(struct list_s));
	new_node->str=str;
	new_node->next=head;
	return (new_node);
}
