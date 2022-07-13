#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
		remainder = n % 2;
		n = n / 2;
		converted = converted + remainder * temp;
		temp = temp * 10;
	}
	printf("%li", converted);
}
