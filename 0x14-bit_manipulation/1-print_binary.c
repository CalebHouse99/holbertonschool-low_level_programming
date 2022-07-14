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
	int remainder, temp = 1;

	while (n != 0)
	{
		if (n & 1)
		{
			remainder = 1;
		}
		else
		{
			remainder = 0;
		}
		n = n >> 1;
		converted = converted + (remainder * temp);
		temp = temp * 10;
	}
	printf("%li", converted);
}
