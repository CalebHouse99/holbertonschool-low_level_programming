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
int sum = 0;

va_start ( arguments, n );
for (int g = 0; g < num; g++ )
{
sum += va_arg (arguments, double);
}
va_end ( arguments );
return sum;
}
