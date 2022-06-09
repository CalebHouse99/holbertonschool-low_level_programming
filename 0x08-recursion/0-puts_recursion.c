#include "main.h"
/**
 * _puts_recursion - like putchar, but no loops!
 *
 *
 *@s: string
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
s++;
_puts_recursion(_putchar(s));
}
s++;
}
