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
unsigned int n = 0;
int a, b;

a = 0;

while (s[a] != '\0')
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
{
count++;
break;
}
}
if (accept[b] == '\0')
break;
a++;
}
return (count);
}
