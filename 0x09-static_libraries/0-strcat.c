#include <stdio.h>
#include "main.h"
/**
 * _strcat - dest combines with src
 * @dest: first string
 * @src: second string
 * Return: 0;
 */
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';

return (dest);
}
