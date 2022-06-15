#include "main.h"
/**
 *_puts - function
 *@str: string
 *Return: null
 */
void _puts(char *str)
{
int t;

t = 0;
while (str[t] != '\0')
{
_putchar(str[t]);
t++;
}
_putchar('\n');
}
