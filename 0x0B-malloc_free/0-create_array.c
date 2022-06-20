#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates array
 *@size: size
 *@c: character
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
 char *a;

if (size == 0)
{
return (NULL);
}
a = malloc(size * sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
a[i] = c;
}
}
