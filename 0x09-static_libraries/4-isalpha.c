#include<stdio.h>
#include"main.h"
/**
 * _isalpha - Print the alphabet
 *@c: character
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
