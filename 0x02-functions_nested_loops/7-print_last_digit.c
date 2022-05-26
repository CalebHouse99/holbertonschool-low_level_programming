#include<stdio.h>
#include"main.h"
/**
 * print_last_digit - prints the last digit
 *@i: integer
 * Return: integer
 */
int print_last_digit(int i)
{
int n;
n = (i % 10);
if (i < 0)
{
i = -i;
n = i % 10;
}
if (n < 0)
{
_putchar(n + '0');
}
return (n);
}
