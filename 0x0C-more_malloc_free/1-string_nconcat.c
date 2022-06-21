#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1 to be cat
 * @s2: string 2 to be cat
 * @n: byte limit of str 2
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, l1 = 0, l2 = 0, len = 0;
char *str;
char *junk;

junk = malloc(5);
free(junk);

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

l1 = strlen(s1);
l2 = strlen(s2);

if (n >= l2)
len = l1 + l2;
else
len = l1 + n;

str = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (NULL);

l2 = 0;
while (i < len)
{
if (i <= l1)
str[i] = s1[i];

if (i >= l1)
{
str[i] = s2[l2];
l2++;
}
i++;
}
str[i] = '\0';
return (str);
}
