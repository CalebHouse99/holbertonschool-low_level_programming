#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number of numbers
 * @separator: string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arguments;
unsigned int g;

va_start(arguments, n);

if (n == 0)
{
printf("\n");
return;
}
if (separator == NULL)
{
separator = "";
}

for (g = 0; g < n - 1; g++)
{
printf("%d%s", va_arg(arguments, int), separator);
}
printf("%d\n", va_arg(arguments, int));

va_end(arguments);
}
