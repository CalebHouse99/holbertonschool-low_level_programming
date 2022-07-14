#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* set_bit - it sets the bit
* @n: starting number
* @index: index of the binary number
*
* Return: 1 on success, -1 on error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(n) * 8)
		return (-1);

	i = *n & ~(1 << index);
	*n = i | (1 << index);

	return (1);
}
