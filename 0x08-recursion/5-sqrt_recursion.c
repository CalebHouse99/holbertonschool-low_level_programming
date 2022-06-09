#include "main.h"
/**
 * find_square - finds the square
 *
 *@n: number
 *@a: number
 * Return: find_square
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
return (find_square(n, a + 1));
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
return (find_square(n, 0));
}
}
