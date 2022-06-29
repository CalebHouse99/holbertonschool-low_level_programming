#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all integers together, regardless of how many there are
 * @n: number of numbers
 *
 * Return: Sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
va_list arguments;
int sum;
unsigned int g;

va_start(arguments, n);
for (g = 0; g < n; g++)
{
sum += va_arg(arguments, int);
}
va_end(arguments);
return (sum);
}
