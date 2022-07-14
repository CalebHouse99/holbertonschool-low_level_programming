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
	long converted = 0;
	long remainder, temp = 1;

	if (n == 0)
		_putchar('0');

	while (n != 0)
	{
		if (n & 1)
		{
			remainder = 1;
			_putchar('1');
			
		}
		else
		{
			remainder = 0;
			_putchar('0');
		}
		n = n >> 1;
		converted = converted + (remainder * temp);
		temp = temp * 10;
	}
}
