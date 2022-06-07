#include <stdio.h>
#include "holberton.h"
/**
 * _strncpy - copies to dest
 * @dest: first string
 * @src: second string
 * @n: variable
 * Return: 0;
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;

a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
