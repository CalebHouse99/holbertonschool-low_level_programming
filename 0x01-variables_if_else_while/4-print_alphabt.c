#include<stdio.h>
/**
* main - print alphabet in lowercase excluding q and e
*
* Return: 0
*/
int main(void)
{
char ch[] = "abcdfghijklmnoprstuvwxyz"
int i;

for (i = 0; i < 26; i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
