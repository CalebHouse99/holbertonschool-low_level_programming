#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * Return : Always 0
 */
void print_numbers(void)
{
int i;
char ch[] = "0123456789";

for (i = 1; i < 11; i++)
{
_putchar(ch[i]);
}
_putchar('\n');
return (0);
}
