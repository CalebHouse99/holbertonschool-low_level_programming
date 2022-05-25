#include<stdio.h>
#include"main.h"
/**
 * print_last_digit - prints the last digit
 *@i: integer
 * Return: 0
 */
int print_last_digit(int i)
{
int n;
n = (i % 10);
if (n < 0)
{
n = (-1 * n);
}
putchar(n + '0');
return (n);
}
