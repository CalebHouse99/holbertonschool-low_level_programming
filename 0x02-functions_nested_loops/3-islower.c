#include<stdio.h>
#include"main.h"
/**
 * _islower - Print the alphabet
 *@c: character
 * Return: 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
