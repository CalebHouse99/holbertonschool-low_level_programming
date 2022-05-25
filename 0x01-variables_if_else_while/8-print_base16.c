#include<stdio.h>
/**
* main - print numbers of base 16
*
* Return: 0
*/
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i);
}
for (i = 'a'; i < 'g'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
