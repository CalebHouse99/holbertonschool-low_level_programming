#include <stdio.h>
#include "holberton.h"
/**
 *reverse_array - reverses the array
 *@a: array
 *@n: variable
 *Return: 0
 */
void reverse_array(int *a, int n)
{
int i;
int b;

i = 0;
n = n - 1;

while (i < n)
{
b = a[i];
a[i] = a[n];
a[n] = b;
n--;
i++
}
}
