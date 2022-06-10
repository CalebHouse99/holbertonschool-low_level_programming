#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals
 * @a: array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
int b, c, i;

b = 0;
c = 0;
for (i = 0; i < size; i++)
{
b = b + a[(size + 1) * i];
c = c + a[(size - 1) * (i + 1)];
}
printf("%d, %d\n", b, c);
}
