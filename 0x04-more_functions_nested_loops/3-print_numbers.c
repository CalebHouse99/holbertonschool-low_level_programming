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

for (i = 0; i < 10; i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
