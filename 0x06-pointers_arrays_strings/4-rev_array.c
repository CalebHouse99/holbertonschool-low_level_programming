#include <stdio.h>
#include "holberton.h"
/**
 *reverse_array - reverses the array
 *@a: array
 *@n: variable
 *Return: void
 */
void reverse_array(int *a, int n)
{
int b;
int c;

for (b = 0; b < n / 2; b++)
{
c = a[b];
a[b] = a[n - b - 1];
a[n - b - 1] = c;
}
}
