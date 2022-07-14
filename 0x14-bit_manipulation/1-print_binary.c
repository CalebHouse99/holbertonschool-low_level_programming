#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* print_binary - converts base 10 to binary
* @n: starting number
*
* Return: Binary converted number
*/

void print_binary(unsigned long int n)
{
	unsigned long int converted = n;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((converted & 1) + '0');
}
