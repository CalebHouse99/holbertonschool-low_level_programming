#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_helper(array, value, 0, size - 1));
}

/**
 * advanced_binary_helper - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @value: The value to search for.
 * @start: The starting index of the subarray to search in.
 * @end: The ending index of the subarray to search in.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int advanced_binary_helper(int *array, int value, int start, int end)
{
	int mid, i;

	/* Base case: array is empty */
	if (start > end)
		return (-1);

	mid = (start + end) / 2;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
		printf("%d%s", array[i], i == end ? "\n" : ", ");

	if (array[mid] == value && (mid == start || array[mid - 1] < value))
		return (mid);

	if (array[mid] >= value)
		return (advanced_binary_helper(array, value, start, mid));

	return (advanced_binary_helper(array, value, mid + 1, end));
}