#include<stdio.h>
#include"main.h"
/**
 * print_alphabet - Print the alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
char s[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
