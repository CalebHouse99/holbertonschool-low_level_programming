#include<stdio.h>
#include"main.h"
/**
 * print_alphabet_x10 - Print the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char s[] = "abcdefghijklmnopqrstuvwxyz";
int n;
int i;
for (n = 0; n < 10; n++)
{
for (i = 0; i < 26; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
}
