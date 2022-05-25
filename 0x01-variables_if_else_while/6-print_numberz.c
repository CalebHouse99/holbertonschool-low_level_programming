#include<stdio.h>
/**
* main - count from 1-10
*
* Return: 0
*/
int main(void)
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
