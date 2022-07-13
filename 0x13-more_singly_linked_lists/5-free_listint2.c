#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
#include "4-free_listint.c"

/**
* free_listint2 - frees the list
*
* @head: pointer to the first node
*
*/

void free_listint2(listint_t **head)
{
	free_listint(**head);
	*head = NULL;
}
