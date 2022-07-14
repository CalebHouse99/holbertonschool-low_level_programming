#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - converts binary to an unsigned int
* @b: string of 0s and 1s
*
* Return: unsigned int or 0 if b contains NULL or non-0/1 numbers
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int i = 0;

		if (b == NULL)
		{
			return (0);
		}

		while (b[i] == '0' || b[i] == '1')
		{
			converted <<= 1;
			converted += b[i] - '0';
			i++;
			if (b[i] >= '2')
				return (0);
		}
	return (converted);
}
