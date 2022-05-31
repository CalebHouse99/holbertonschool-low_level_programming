#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * compute - assign random number to variable
 *
 * Return: 0
 */
void positive_or_negative(int i)
{
srand(time(0));
i = rand() - RAND_MAX / 2;
if (i > 0)
{
printf("%i is positive\n", i);
}
else if (i == 0)
{
printf("%i is zero\n", i);
}
else
{
printf("%i is negative\n", i);
}
}
