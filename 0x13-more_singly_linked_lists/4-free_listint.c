#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* free_listint - frees the list
*
* @head: pointer to the first node
*
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
