#include "main.h"
/**
 * _strchr - replaces characters
 *@s: first occurrence
 *@c: of this
 * Return: first character
 */
char *_strchr(char *s, char c);
{
unsigned int a;
while (s[a] != '\0')
{
if (s[a] == c)
{
return (s + a);
}
if (s[a] == c)
{
return (s + a);
}
}
return (NULL);
}
