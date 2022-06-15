#include "main.h"
/**
 *_strlen - function
 *@s: length
 *Return: t
 */
int _strlen(char *s)
{
int t;
t = 0;
while (*s != '\0')
{
s++;
t++;
}
return (t);
}
