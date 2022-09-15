#include "main.h"

/**
 * print_line - check code
 * @n: argument
 *
 * Return: nothing
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
