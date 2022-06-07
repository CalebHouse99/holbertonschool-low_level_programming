#include <stdio.h>
#include "holberton.h"
/**
 * _strncpy - dest combines with src
 * @dest: first string
 * @src: second string
 * @n: variable
 * Return: 0;
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;

while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (b < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
