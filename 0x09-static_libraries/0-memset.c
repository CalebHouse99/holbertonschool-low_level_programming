#include "main.h"
/**
 * _memset - replaces characters
 *@s: pointer
 *@b: filler
 *@n: number of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
