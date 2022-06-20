#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate strings
 *
 *@s1: string one
 *@s2: string two
 *
 * Return: concatonated string
 */

char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;

if (s1 == NULL)
s1 = " ";
if (s2 == NULL)
s2 = " ";

char *a = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));

while (s1)
{
a[i] = s[i];
i++;
}
while (s2)
{
a[i] = s2[i];
i++;
j++;
}
}
