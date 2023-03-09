#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    int low = 0, high = size - 1, mid, index = -1;
    while (low <= high)
    {
        printf("Searching in array: ");
        for (int i = low; i <= high; i++)
            printf("%d%s", array[i], i == high ? "\n" : ", ");

        mid = (low + high) / 2;
        if (array[mid] < value)
            low = mid + 1;
        else if (array[mid] > value)
            high = mid - 1;
        else
        {
            index = mid;
            break;
        }
    }

    if (index == -1)
        return index;

    // Check if the value occurs only once in the array
    if (index == 0 || array[index - 1] != value)
        return index;

    // Search left of the mid for the first occurrence of the value
    return advanced_binary_helper(array, value, low, index);
}

/**
 * advanced_binary_helper - Searches for the first occurrence of a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @value: The value to search for.
 * @start: The starting index of the subarray to search in.
 * @end: The ending index of the subarray to search in.
 *
 * Return: The index where the first occurrence of value is located, or -1 if not found.
 */
int advanced_binary_helper(int *array, int value, int start, int end)
{
    int mid;
    while (start < end)
    {
        printf("Searching in array: ");
        for (int i = start; i <= end; i++)
            printf("%d%s", array[i], i == end ? "\n" : ", ");

        mid = (start + end) / 2;
        if (array[mid] < value)
            start = mid + 1;
        else if (array[mid] >= value)
            end = mid;
    }

    if (array[start] == value)
        return start;

    return -1;
}
