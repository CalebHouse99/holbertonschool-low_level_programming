#include "main.h"
/**
 * _strchr - replaces characters
 *@s: first occurrence
 *@c: of this
 * Return: first character
 */
char *_strchr(char *s, char c)
{
for (;; s++)
{
if (*s == c)
{
return (s);
}
if (!*s)
{
return (NULL);
}
}
return (NULL);
}
