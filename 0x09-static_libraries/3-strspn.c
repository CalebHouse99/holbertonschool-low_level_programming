#include "main.h"
/**
 * _strspn - the function
 *
 * @s: string
 * @accept: result
 *
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
int a, b, c;

c = 0;
for (a = 0; s[a] != 32; a++)
{
b = 0;
while (accept[b])
{
if (s[a] == accept[b])
c++;
b++;
}
}
return (c);
}
