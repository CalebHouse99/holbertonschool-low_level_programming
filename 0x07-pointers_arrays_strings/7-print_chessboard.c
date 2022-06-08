#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: pointer
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
int b = 0;
int c = 0;
while (c < 8)
{
b = 0;
while (b < 8)
{
_putchar(a[c][b]);
b++;
}
c++;
_putchar('\n');
}
}
