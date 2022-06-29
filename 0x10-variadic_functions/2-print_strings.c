#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of numbers
 * @separator: separates strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int g = 0;
va_list arguments;
char *a;

va_start(arguments, n);

if (n == 0)
{
printf("\n");
return;
}

if (separator == NULL)
separator = "";

for (g = 0; g < n - 1; g++)
{
a = va_arg(arguments, char *);

if (a)
printf("%s", a);
else
printf("(nil)");

printf("%s", separator);
}
a = va_arg(arguments, char *);

if (a == NULL)
printf("(nil)\n");
else
printf("%s\n", a);
}
