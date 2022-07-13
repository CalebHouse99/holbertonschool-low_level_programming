#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "main.h"

/**
* binary_to_uint - converts binary to an unsigned int
* @b: string of 0s and 1s
*
* Return: unsigned int or 0 if b contains NULL or non-0/1 numbers
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted, multiplier = 1;
	const char *str;
	const char end = strlen(b - 1);

	for (str = b; *b != '\0'; b++)
	{
		if (str == NULL)
		{
			return (0);
		}
		else if (*str != 1 && *str != 0)
		{
			return (0);
		}
		else
		{
			while (end != *str)
			{
				if (end == 1)
				{
					converted++;
				} 
				multiplier *= 2;
				converted = end * multiplier;
			}
		}
	}	
	return (converted);
}