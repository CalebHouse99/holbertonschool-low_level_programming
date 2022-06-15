#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function
 * @argc: number
 * @argv: string
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int sum = 0, x, y;

for (x = 1 ; x < argc ; x++)
{
for (y = 0 ; argv[x][y] ; ++y)
{
if (!isdigit(argv[x][y]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[x]);
}
printf("%d\n", sum);
return (0);
}
