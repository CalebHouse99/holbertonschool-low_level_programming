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

void free_listint2(listint_t **head)
{
	listint_t **temp;

	while (head)
	{
		temp = head;
		free(temp);
		head = NULL;
	}
}
