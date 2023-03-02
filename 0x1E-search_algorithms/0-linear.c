#include "search_algos.h"

/**
 * linear_search - searches through array linearly
 * @array: pointer to the first element of the array
 * @size: num of elements in array
 * @value: value searching for
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i, *pointer = array;

	if (!array)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *pointer);
		if (*pointer == value)
			return (i);

		pointer++;
	}
	return (-1);
}
