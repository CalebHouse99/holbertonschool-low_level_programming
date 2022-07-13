#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* free_listint2 - frees the list
*
* @head: pointer to the first node
*
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(temp);
		*head = temp;
	}
	head = NULL;
}
