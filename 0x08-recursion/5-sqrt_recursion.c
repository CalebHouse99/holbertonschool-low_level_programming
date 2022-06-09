#include "main.h"
/**
 * find_square - finds the square
 *
 *@n: number
 *@a: number
 */
int find_square(int n, int a)
{
if (a * a > n)
{
return (-1);
}
if (a * a == n)
{
return (a);
}
else
{
return (squirt_r(n, a + 1));
}
}

/**
 * _sqrt_recursion - function
 *
 *@n: number
 *
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (squirt_r(n, 0));
}
}
