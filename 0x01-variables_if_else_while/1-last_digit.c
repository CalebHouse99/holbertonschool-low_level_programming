#include <stdlib.h>
#include <time.h>
/**
 * main - prints last digit of variable n
 *
 * @n: random number
 *
 * Return: 0 always
 */
int main(void)
{
int n;
int v;

srand(time(0));
n = rand() - RAND_MAX / 2;
v = n % 10;
if (v > 5)
{
printf("%d and is greater than 5", v);
}
else if (v == 0)
{
printf("%d and is 0", v);
}
else
{
printf("%d and is less than 6 and not 0", v);
}
return (0);
}
