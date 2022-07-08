#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* free_list - frees the list
*
* @head: pointer to the first node
*
*/

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
