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
	unsigned int converted;
	const char *str;

	for (str = b; *b != '\0'; b++)
	{
		if (str == NULL)
			return (0);
		else if (*str != 1 && *str != 0)
			return (0);
		else
		{
			if (*str == '1')
			converted = 128; 
			str++;

			if (*str == '1')
			converted = converted + 64; 
			str++;

			if (*str == '1')
			converted = converted + 32; 
			str++;

			if (*str == '1')
			converted = converted + 16; 
			str++;

			if (*str == '1')
			converted = converted + 8; 
			str++;

			if (*str == '1')
			converted = converted + 4; 
			str++;

			if (*str == '1')
			converted = converted + 2; 
			str++;

			if (*str == '1')
			converted = converted + 1; 
			str++;
		}
	}	
	return (converted);
}