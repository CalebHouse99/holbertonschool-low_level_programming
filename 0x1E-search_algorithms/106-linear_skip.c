#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 * Return: Pointer on the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev, *curr;

    if (!list)
        return (NULL);

    curr = list->express;
    prev = list;

    while (curr)
    {
        printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);

        if (curr->n >= value)
            break;

        prev = curr;
        if (!curr->express)
        {
            while (curr->next)
                curr = curr->next;
            break;
        }
        curr = curr->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, curr->index);

    while (prev)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

        if (prev->n == value)
            return (prev);

        prev = prev->next;
    }

    return (NULL);
}
