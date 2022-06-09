#include <stdio.h>
#include "holberton.h"
/**
 *string_toupper - changes lowercase to uppercase
 *@n: number
 *Return: character
 */
char *string_toupper(char *n);
{
if (n > 98  && n < 123)
{
n = n - 32;
_putchar(*n);
n = n + 32;
string_toupper(n + 1);
}
else
{
_putchar(n + '0');
}
}
