#include<stdio.h>
#include"main.h"
/**
 * main - check the code
 *
 * Return: 0
 */
void jack_bauer(void)
{
int hour;
int minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar('0' + hour / 10);
_putchar('0' + hour % 10);
_putchar(':');
_putchar('0' + second / 10);
_putchar('0' + second % 10);
}
}
}
