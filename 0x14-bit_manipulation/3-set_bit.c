#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* get_bit - it gets the bit
* @n: starting number
* @index: index of the binary number
*
* Return: Binary converted number
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	long remainder = 1;

	n = n >> index;
	remainder = n & 1;

	if (remainder == 1)
	{
		return (-1);
	}
	else if (remainder == 0)
	{
		return (1);
	}
	else 
	{
		return (-1);
	}
}
