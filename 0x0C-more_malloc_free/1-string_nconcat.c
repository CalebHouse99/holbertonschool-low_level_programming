#include "main.h"

/**
 * string_nconcat - concatonates bytes onto a string
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int s1len, s2len, i;
char *s;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

s1len = strlen(s1);
s2len = strlen(s2);

if ((int) n <= s2len)
s2len = n;

s = malloc(s1len + s2len + 1);
if (s == NULL)
return (NULL);

i = 0;
while (i < s1len)
{
s[i] = s1[i];
i++;
}
i = 0;
while (i < s2len)
{
s[i + s1len] = s2[i];
i++;
}

s[s1len + s2len] = '\0';
return (s);

}
