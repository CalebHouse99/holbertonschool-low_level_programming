#include<stdio.h>
/**
 * main - Print the alphabet in reverse
 *
 * Return: 0
 */
int main()
{
char s[] = "zyxwvutsrqponmlkjihgfedcba";
int i;
for (i = 0; i < 26; i++)
{
putchar(s[i]);
}
putchar('\n');
return (0);
}
