#include "main.h"

/**
 * print_diagonal - print
 * @n: argument
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
int k;
int j;

if (n > 0)
{
for (k = 0; k < n; k++)
{
for (j = 0; j < k; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
